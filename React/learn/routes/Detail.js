import { useParams, Link } from "react-router-dom";
import { useEffect, useState } from 'react';

function Detail()
{
    const { id } = useParams();
    const [loading, setLoading] = useState(true);
    const [movie, setMovie] = useState({});
    const getMovie = async () => {
        const json = await (await fetch(
            `https://yts.mx/api/v2/movie_details.json?movie_id=${id}`
        )).json();
        console.log(json);
        setMovie(json.data.movie);
        setLoading(false);
    }
    useEffect(() => {
        getMovie();
    }, []);
    return (
        <div>
            {loading ? <h1>Loading...</h1> :
            <div>
                <h2>{movie.title_long}</h2>
                <img src={movie.medium_cover_image} alt={movie.title}/>
                <p>{movie.description_intro}</p>
                <a href={`https://www.imdb.com/title/${movie.imdb_code}/`}><h3>IMDB</h3></a>
                <ul>
                    {movie.genres.map(genre => <li key={genre}>{genre}</li>)}
                </ul>
            </div>}
        </div>
    );
}

export default Detail;