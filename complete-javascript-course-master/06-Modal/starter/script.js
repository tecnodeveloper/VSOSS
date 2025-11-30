'use strict';

let btnOpenModal = document.querySelectorAll('.show-modal');
let btnCloseModal = document.querySelector('.close-modal');
let modal = document.querySelector('.modal');
let overlay = document.querySelector('.overlay');

const btnCloseModalFunction = function () {
  modal.classList.add('hidden');
  overlay.classList.add('hidden');
};

for (let i = 0; i < btnOpenModal.length; i++) {
  btnOpenModal[i].addEventListener('click', function () {
    modal.classList.remove('hidden');
    overlay.classList.remove('hidden');
  });
}

btnCloseModal.addEventListener('click', btnCloseModalFunction);
overlay.addEventListener('click', btnCloseModalFunction);

document.addEventListener('keydown', function (event) {
  if (event.key === 'Escape') {
    if (!document.querySelector('.modal').classList.contains('hidden')) {
      btnCloseModalFunction();
    }
  }
});
