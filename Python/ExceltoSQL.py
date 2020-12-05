import pymysql
import openpyxl

'''
엑셀의 데이터가 무조건 A에서 맞닿아 있어야 합니다.
'''

def sqlexec(sqlrun, connect, cursor):
    cursor.execute(sqlrun)
    result = cursor.fetchall()
    connect.commit()
    return result

def sqlrunmake(opened_excel, sqlTN, row, column):
    exceldata = []
    for i in range(column):
        temp = opened_excel[str(chr(65 + i)) + str(row)].value
        temp = temp.replace('\'', '\'\'') # 이스케이프 문자 처리
        temp = temp.replace('\\', '\\\\')
        exceldata.append(temp)

    sql = 'INSERT INTO ' + sqlTN +  ' VALUES(' # INSERT INTO table VALUES
    for i in range(column):
        if (i == column-1):
            sql += str('\'') + exceldata[i] + str('\'')
        else:
            sql += str('\'') + exceldata[i] + str('\', ')
    sql += ')' # )
    return sql

if __name__ == "__main__":
    # EXCEL 설정
    yes = "N"
    while yes == "N":
        print("Excel 파일의 경로 입력: ", end='')
        excelpath = str(input()) # 엑셀 위치
        excelpath = excelpath.replace('\\', '\\\\')

        print("Excel 시트명 입력: ", end='')
        sheet = str(input()) # 엑셀 시트명

        print("Excel 추출할 길이 입력: ", end='')
        sheetlength = int(input()) # 시트중 추출할 길이

        print("Excel 추출할 시작위치 입력: ", end='')
        row = int(input()) # 시트에서 데이터 추출할 시작위치 EX) A2 부터 추출시작

        print("Excel 추출할 행 길이 입력: ", end='')
        column = int(input()) # 시트에서 데이터 추출할 행 길이

        print("----------")
        print("경로: " + excelpath)
        print("시트명: " + sheet)
        print("추출 길이: " + str(sheetlength))
        print("추출 시작 위치: " + str(row))
        print("추출 행 길이: " + str(column))
        print("----------")
        print("입력하신 정보가 맞습니까? Y, N: ", end='')
        yes = str(input())

    # DB 설정
    yes = "N"
    while yes == "N":
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
        print("입력하신 정보가 맞습니까? Y, N: ", end='')
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

    #excel
    print("엑셀 로드중..")
    load_wb = openpyxl.load_workbook(excelpath) # load file
    load_ws = load_wb[sheet] # excel sheet load
    print("엑셀 로드완료")

    # run
    for i in range(sheetlength):
        sqlrun = sqlrunmake(load_ws, sqltablename, row, column)
        sqlresult = sqlexec(sqlrun, sqlconnected, sqlcursor)
        row += 1
        print("진행도: " + str(round(i/sheetlength*100, 3)) + "% 개수: " + str(i+1)) # percentage

    #result
    print(sqlresult)

    #close
    load_wb.close()
    sqlconnected.close()
    sqlcursor.close()
