import PropTypes from 'prop-types';
import styled from './Button.module.css';
function Button({text, clickhandle})
{
    return (
        <button onClick={clickhandle} className={styled.btn}>{text}</button>
    );
}

Button.propTypes = {
    text: PropTypes.string.isRequired
};

export default Button;