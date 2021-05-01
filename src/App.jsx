import React, { useState } from "react";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";
import "../node_modules/bootstrap/dist/js/bootstrap.bundle";

import questions from './questions.js';

function App() {
    const [currentQuestion,nextQuestion] = useState(0);
    const [headingName,nextName] = useState("Quiz APP");

    function nextfn() {
        if(document.getElementById('flexRadioDefault1').checked === true){
            if( questions[currentQuestion].correctIndex === 0 ){
                nextName('Correct,next question');
            }else{
                nextName('Wrong,next question');
            }
        }
        if (document.getElementById('flexRadioDefault2').checked === true){
            if( questions[currentQuestion].correctIndex === 1 )
                nextName('Correct,next question');
            else
                nextName('Wrong,next question');
        }
        if (document.getElementById('flexRadioDefault3').checked === true){
            if( questions[currentQuestion].correctIndex === 2)
                nextName('Correct,next question');
            else
                nextName('Wrong,next question');
        }
        if (document.getElementById('flexRadioDefault4').checked === true){
            if( questions[currentQuestion].correctIndex === 3 )
                nextName('Correct,next question');
            else
                nextName('Wrong,next question');
        }

        if(currentQuestion+1 < questions.length){
            nextQuestion(currentQuestion+1);
        }else if(currentQuestion+1 >= questions.length){
            nextQuestion(0);
        }
    }

    return(
        <>
            <div className="body-total">
            <h1 className="main-heading">{headingName}</h1>
            <div className="box">
                <div className="box-question">
                    <p>{ questions[currentQuestion].question }</p>
                </div>
                <div className="box-option">
                    <div className="options">
                    <div className="form-check">
                        <input className="form-check-input" type="radio" name="flexRadioDefault" id="flexRadioDefault1"/>
                        <label className="form-check-label">
                            {questions[currentQuestion].answers[0]}
                        </label>
                    </div>
                    </div>
                    <div className="options">
                    <div className="form-check">
                        <input className="form-check-input" type="radio" name="flexRadioDefault" id="flexRadioDefault2"/>
                        <label className="form-check-label">
                        {questions[currentQuestion].answers[1]}
                        </label>
                    </div>
                    </div>
                    <div className="options">
                    <div className="form-check">
                        <input className="form-check-input" type="radio" name="flexRadioDefault" id="flexRadioDefault3"/>
                        <label className="form-check-label">
                        {questions[currentQuestion].answers[2]}
                        </label>
                    </div>
                    </div>
                    <div className="options">
                        
                    <div className="form-check">
                        <input className="form-check-input" type="radio" name="flexRadioDefault" id="flexRadioDefault4"/>
                        <label className="form-check-label">
                        {questions[currentQuestion].answers[3]}
                        </label>
                    </div>

                    </div>
                </div>
                <div className="button-check">
                <button type="button" className="btn btn-outline-danger" onClick={nextfn}>Submit</button>
                </div>
            </div>
            </div>
        </>
    )
}

export default App;