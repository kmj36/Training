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
    useEffect(() => {
        console.log("todos", todos);
    }, [todos]);
    return (
        <div>
            <h1>My To Do List</h1>
            <ul>
                {todos.map((todo, index) => (
                    <li key={index}>{todo}</li>
                ))}
            </ul>
            <form onSubmit={onSubmit}>
                <input
                    onChange={onChange}
                    value={todo}
                    type="text"
                    placeholder="Write your to do..."
                />
                <button>Add to Do</button>
            </form>
        </div>
    );
}

export default App;