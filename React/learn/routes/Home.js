import React from 'react';
import { useEffect, useState } from 'react';
import { useSearchParams } from 'react-router-dom';
import Movie from '../components/Movie';

function Home()
{
    const [loading, setLoading] = useState(true);
    const [movies, setMovies] = useState([]);
    const [searchParams, setSearchParams] = useSearchParams();
    const getMovies = async () => {
        const json = await (await fetch(
            'https://yts.mx/api/v2/list_movies.json?minimum_rating=10&sort_by=year'
        )).json();
        setMovies(json.data.movies);
        setLoading(false);
    }
    useEffect(() => {
        getMovies();
    }, []);
    return (
        <div>
            {loading ? <h1>Loading...</h1> : 
            <div>
                {movies.map((movie, index) =>
                    <Movie
                    num={index+1}
                    key={movie.id}
                    id={movie.id}
                    coverImg={movie.medium_cover_image}
                    title={movie.title}
                    summary={movie.summary}
                    genres={movie.genres}
                    />
                )}
            </div>}
        </div> 
    );
}

export default Home;