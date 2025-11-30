'use strict';

//Select all the elements of html page
let score1Player = document.getElementById('score--0');
let score2Player = document.getElementById('score--1');
let player1CurrentScore = document.getElementById('current--0');
let player2CurrentScore = document.getElementById('current--1');
let dice = document.querySelector('.dice');
let btnNewGame = document.querySelector('.btn--new');
let btnRollDice = document.querySelector('.btn--roll');
let btnHold = document.querySelector('.btn--hold');
let player0El = document.querySelector('.player--0');
let player1El = document.querySelector('.player--1');

//Implementing logic
let playingMatch = true;
score1Player.textContent = '0';
score2Player.textContent = '0';
dice.classList.add('hidden');

const switchPlayer = function () {
  document.getElementById(`current--${activeplayer}`).textContent = '0';
  //Switch player if it is 0 then become one if it is 1 then become 0 like toggle
  activeplayer = activeplayer === 0 ? 1 : 0;
  currentScore = 0;
  player0El.classList.toggle('player--active');
  player1El.classList.toggle('player--active');
};

// That array stores scores of player
let scores = [0, 0];
let currentScore = 0;
let activeplayer = 0;

btnRollDice.addEventListener('click', function () {
  //Generate random number from 1 to 6
  if (playingMatch) {
    let diceNo = Math.trunc(Math.random() * 5 + 1); //range(0 to 0.999999)
    dice.classList.remove('hidden');
    dice.src = `dice-${diceNo}.png`;
    //   if dice is not equal to 1
    if (diceNo !== 1) {
      currentScore += diceNo;
      document.getElementById(`current--${activeplayer}`).textContent =
        currentScore;
    } else {
      switchPlayer();
    }
  }
});

btnHold.addEventListener('click', function () {
  //Add score to total score
  if (playingMatch) {
    scores[`${activeplayer}`] += currentScore;
    document.querySelector(`#score--${activeplayer}`).textContent =
      scores[`${activeplayer}`];
    //if total score is greater than 100
    if (scores[`${activeplayer}`] >= 100) {
      //active player will wins
      document
        .querySelector(`.player--${activeplayer}`)
        .classList.add('player--winner');
      dice.classList.add('hidden');
      playingMatch = false;
    }
    //if total score is less than 100 switch player
    else {
      switchPlayer();
    }
  }
});

btnNewGame.addEventListener('click', function () {
  //total score and current score become 0
  //   Seitch to player0 if it is player1
  //After that playing match become true
  document
    .querySelector(`.player--${activeplayer}`)
    .classList.remove('player--winner');
  currentScore = 0;
  scores[`${activeplayer}`] = 0;
  document.querySelector(`#score--${activeplayer}`).textContent = '0';
  player1CurrentScore.textContent = '0';
  player2CurrentScore.textContent = '0';
  activeplayer = activeplayer === 1 ? switchPlayer() : 0;
  dice.classList.add('hidden');
  playingMatch = true;
  console.log(scores[0], scores[1]);
});
