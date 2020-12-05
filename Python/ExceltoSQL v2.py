import pymysql
import openpyxl

def sqlexec(sqlrun, connect, cursor):
    cursor.execute(sqlrun)
    connect.commit()

def sqlrunmake(sqlTN, opened_excel, row, startrow, startcolumn):
    exceldata = []
    for i in range(row):
        temp = opened_excel[str(chr(ord(startrow) + i)) + str(startcolumn)].value
        temp = temp.replace('\'', '\'\'') # 이스케이프 문자 처리
        temp = temp.replace('\\', '\\\\')
        exceldata.append(temp)

    sql = 'INSERT INTO ' + sqlTN +  ' VALUES(' # INSERT INTO table VALUES
    for i in range(row):
        if (i == row-1):
            sql += str('\'') + exceldata[i] + str('\'')
        else:
            sql += str('\'') + exceldata[i] + str('\', ')
    sql += ')' # )
    return sql

if __name__ == "__main__":
    # EXCEL 설정
    yes = "no"
    while yes == "no":
        print("Excel 파일의 경로 입력: ", end='')
        excelpath = str(input()) # 엑셀 위치
        excelpath = excelpath.replace('\\', '\\\\')

        print("Excel 시트명 입력: ", end='')
        sheetname = str(input()) # 엑셀 시트명

        print("Excel 추출할 시작 행 위치 입력 ex) A: ", end='')
        startrow = str(input())

        print("Excel 추출할 시작 열 위치 입력 ex) 1: ", end='')
        startcolumn = int(input())

        print("Excel 추출할 행 길이 입력: ", end='')
        row = int(input())  # 시트에서 데이터 추출할 행 길이

        print("Excel 추출할 열 길이 입력: ", end='')
        column = int(input())  # 시트중 추출할 길이

        print("----------")
        print("경로: " + excelpath)
        print("시트명: " + sheetname)
        print("추출할 시작 위치: " + startrow + str(startcolumn))
        print("추출할 행 길이: " + str(row))
        print("추출할 열 길이:" + str(column))
        print("----------")
        print("입력하신 정보가 맞습니까? yes, no: ", end='')
        yes = str(input())

    # excel load
    print("엑셀 로드중..")
    load_wb = openpyxl.load_workbook(excelpath)  # load file
    load_ws = load_wb[sheetname]  # excel sheet load
    print("엑셀 로드완료")

    # DB 설정
    yes = "no"
    while yes == "no":
        print("DB 호스트 입력 ex) 127.0.0.1: ", end='')
        hostinfo = str(input())

        print("DB 사용자명 입력: ", end='')
        userinfo = str(input())

        print("DB 패스워드 입력: ", end='')
        passwdinfo = str(input())

        print("DB 이름 입력: ", end='')
        dbinfo = str(input())

        print("DB 테이블명 입력: ", end='')
        sqltablename = str(input())

        print("DB 문자인코딩 입력 ex) utf8: ", end='')
        charsetinfo = str(input())

        print("----------")
        print("호스트명: " + hostinfo)
        print("유저명: " + userinfo)
        print("패스워드: " + passwdinfo)
        print("데이터베이스명: " + dbinfo)
        print("테이블명: " + sqltablename)
        print("문자인코딩: " + charsetinfo)
        print("----------")
        print("입력하신 정보가 맞습니까? yes, no: ", end='')
        yes = str(input())

    print("SQL 연결중..")
    sqlconnected = pymysql.connect(
            user=userinfo,
            passwd=passwdinfo,
            host=hostinfo,
            db=dbinfo,
            charset=charsetinfo
    )
    sqlcursor = sqlconnected.cursor(pymysql.cursors.DictCursor)
    print("SQl 연결완료")

    # run

    for i in range(column):
        sqlrun = sqlrunmake(sqltablename, load_ws, row, startrow, startcolumn+i)
        sqlexec(sqlrun, sqlconnected, sqlcursor)
        print("진행도: " + str(i+1) + "/" + str(column))

    #result
    print("완료")

    #close
    load_wb.close()
    sqlconnected.close()
    sqlcursor.close()