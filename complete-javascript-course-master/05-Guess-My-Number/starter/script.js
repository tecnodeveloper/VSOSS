// 'use strick';

let number = Math.trunc(Math.random() * 20 + 1); //7

let secretNumber = number;
let score = 20;
let highscore = 0;
const displayMessage = function (message) {
  document.querySelector('.message').textContent = message;
};
// Add event handler when the button is click
document.querySelector('.check').addEventListener('click', function () {
  let guessno = Number(document.querySelector('.guess').value);

  //No input is entered
  if (!guessno) {
    displayMessage('No input is entered');
  }
  //input is equal to number
  else if (guessno === secretNumber) {
    displayMessage('You Won game');
    document.querySelector('body').style.backgroundColor = '#60b347';
    document.querySelector('.number').style.width = '30rem';
    document.querySelector('.number').textContent = secretNumber;
    if (score > highscore) {
      highscore = score;
      document.querySelector('.highscore').textContent = highscore;
    }
  }
  //when guess is not equal
  else if (guessno !== secretNumber) {
    displayMessage(guessno > secretNumber ? 'Too high' : 'Too Low');
    score--;
    if (score <= 0) {
      displayMessage('You Lost game');
      document.querySelector('.score').textContent = 0;
    }
  }
  /*   //when guess is too high
  else if (guessno > secretNumber) {
    document.querySelector('.message').textContent = 'Too High';
    score--;
    if (score <= 0) {
      document.querySelector('.message').textContent = 'You Lost game';
      document.querySelector('.score').textContent = 0;
    }
  }
  //when guess is too low
  else if (guessno < secretNumber) {
    document.querySelector('.message').textContent = 'Too Low';
    score--;
    if (score <= 0) {
      document.querySelector('.message').textContent = 'You Lost game';
      document.querySelector('.score').textContent = 0;
    }
  } */
  // Update the score in dom
  document.querySelector('.score').textContent = score;
});

document.querySelector('.again').addEventListener('click', function () {
  number = Math.trunc(Math.random() * 20 + 1);
  score = 20;
  document.querySelector('body').style.backgroundColor = '#222';
  document.querySelector('.number').style.width = '15rem';
  displayMessage('Start guessing...');
  document.querySelector('.guess').value = '';
  document.querySelector('.score').textContent = '20';
  displayMessage('?');
});
