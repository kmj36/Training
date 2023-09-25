import React, { useState, useEffect } from "react";

function App() {
    const [todo, setTodo] = useState("");
    const [todos, setTodos] = useState([]);
    const onChange = (e) => setTodo(e.target.value);
    const onSubmit = (e) => {
        e.preventDefault();
        if(todo === "") return;
        setTodos((currentTodos) => [...currentTodos, todo]);
        setTodo("");
    }
    return (
        <div>
            <h1>My To Do List {todos.length}</h1>
            <form onSubmit={onSubmit}>
                <input
                    onChange={onChange}
                    value={todo}
                    type="text"
                    placeholder="Write your to do..."
                />
                <button>Add to Do</button>
            </form>
            <hr />
            <ul>
                {todos.map((todo, index) => {
                    return <li key={index}>{todo}</li>;
                }
                )}
            </ul>
        </div>
    );
}

export default App;