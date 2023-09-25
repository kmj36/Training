import { useEffect, useState } from "react";

function App() {
    const [loading, setLoading] = useState(true);
    const [coins, setCoins] = useState([]);
    const [index, setIndex] = useState(0);
    const [money, setMoney] = useState(0);
    const handleSelect = (e) => {
        setIndex(e.target.selectedIndex);
    }
    const onMoneyChange = (e) => {
        setMoney(e.target.value);
    }
    useEffect(() => {
        fetch("https://api.coinpaprika.com/v1/tickers")
        .then((response) => response.json())
        .then((json) => {
            setCoins(json);
            setLoading(false);
        })
    }, []);
    return (
        <div>
            <h1>[The Coins {loading ? "" : `(${coins.length})`}]</h1>
            {loading ? <strong>Loading...</strong> :
                <div>
                    <select onChange={handleSelect}>
                        {coins.map((coin) =>
                        <option key={coin.id}>
                            {coin.name} ({coin.symbol}): $ {coin.quotes.USD.price} USD
                        </option>)}
                    </select>
                    <div>
                        <h2>Last Updated : {coins[index].last_updated}</h2>
                        <h2>1 {coins[index].symbol} = ${coins[index].quotes.USD.price}</h2>
                        <input value={money} onChange={onMoneyChange}></input>
                        <span> $ = {money / coins[index].quotes.USD.price} {coins[index].symbol}</span>
                    </div>
                </div>
            }
        </div>
    );
}

export default App;