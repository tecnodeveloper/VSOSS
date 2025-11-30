"use strict";

/* const calcAverage = (score1, score2, score3) => {
  return (score1 + score2 + score3) / 3;
};

function checkWinner(avgDolhins, avgKoalas) {
  if (avgDolhins > avgKoalas * 2) {
    console.log(`Dolphins win (${avgDolhins} vs ${avgKoalas})`);
  } else if (avgKoalas > avgDolhins * 2) {
    console.log(`Koalas win (${avgKoalas} vs ${avgDolhins})`);
  } else {
    console.log(`No one wins`);
  }
}

const avgDolhins = calcAverage(85, 54, 41);
const avgKoalas = calcAverage(23, 34, 27);

console.log(checkWinner(avgDolhins, avgKoalas));
 */

// Challenge 2

function calcTip(bill) {
  if (bill >= 50 && bill <= 300) {
    console.log(
      `Total bill is ${bill} and the tip is ${bill * 0.15} and the total is ${
        bill + bill * 0.15
      }`
    );
    return bill * 0.15;
  } else {
    console.log(
      `Total bill is ${bill} and the tip is ${bill * 0.2} and the total is ${
        bill + bill * 0.2
      }`
    );
    return bill * 0.2;
  }
}
const bills = [100];
const tips = [15];
const total = [bills[0] + tips[0]];
console.log(calcTip(100));
