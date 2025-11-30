/* BMI = mass / (height * height)
016 CHALLENGE #2
Instructions

Use the BMI example from Challenge #1, and the code you already wrote, and improve it:

1. Print a nice output to the console, telling the user who has the higher BMI. The message can be either:

"Mark's BMI is higher than John's!" or "John's BMI is higher than Mark's!".

2. Modify the outputs above to use template literals to include the BMI values in the outputs.

Example: "Mark's BMI (28.3) is higher than John's (23.9)!" or "John's BMI (29.1) is higher than Mark's (27)!".

Note: Don't round the BMI values. Leave them as they are.
 */

// const { PureComponent } = require("react");

// Test 1
// const massMark = 78;
// const massJohn = 92;
// const heightMark = 1.69;
// const heightJohn = 1.95;

/* const massMark = 95;
const massJohn = 85;
const heightMark = 1.88;
const heightJohn = 1.76;

const BMIMark = massMark / (heightMark * heightMark);
const BMIJohn = massJohn / (heightJohn * heightJohn);

console.log("Weight of Mark", massMark);
console.log("Weight of John", massJohn);
console.log("Height of John", heightJohn);
console.log("Height of Mark", heightMark);
console.log("BMI of John", BMIJohn);
console.log("BMI of Mark", BMIMark);

if (BMIMark > BMIJohn) {
  console.log(`Mark's BMI ${BMIMark} is higher than John's! ${BMIJohn}`);
} else {
  console.log(`John's BMI  ${BMIJohn} is higher than Mark's! ${BMIMark}`);
}
 */

/*  Challenge # 3
Instructions

There are two gymnastics teams: Dolphins and Koalas. They compete against each other 3 times. The winner with the highest average score wins a trophy!

Your tasks:

1. Calculate the average score for each team, using the test data included below. The average score for Dolphins should be assigned to the scoreDolphins variable, and the average score of Koalas should be assigned to the scoreKoalas variable.

2. Compare the team's average scores to determine the winner of the competition, and print to the console:

"Dolphins win the trophy" if Dolphins win, or

"Koalas win the trophy" if Koalas win, or

"Both win the trophy" if their average scores are equal.


TEST DATA: Dolphins scored 96, 108, and 89. Koalas scored 88, 91, and 110. */

/* const DolphinsFirstMatchScore = 96;
const DolphinsSecondMatchScore = 108;
const DolphinsThirdMatchScore = 89;
const koalasFirstMatchScore = 88;
const koalasSecondMatchScore = 91;
const koalasThirdMatchScore = 110;
const noOfMatches = 3;

const scoreDolphins =
  (DolphinsFirstMatchScore +
    DolphinsSecondMatchScore +
    DolphinsThirdMatchScore) /
  noOfMatches;
const scoreKoalas =
  (koalasFirstMatchScore + koalasSecondMatchScore + koalasThirdMatchScore) /
  noOfMatches;

if (scoreDolphins > scoreKoalas) {
  console.log(`Dolphins win the trophy if Dolphins win, or ${scoreDolphins}`);
} else if (scoreKoalas > scoreDolphins) {
  console.log(`Koalas win the trophy if Koalas win, or ${scoreKoalas}`);
} else if (scoreDolphins === scoreKoalas) {
  console.log(`Both win the trophy" if their average scores are equal`);
}
 */
/* 

028 CHALLENGE #4
Instructions

Steven needs a very simple tip calculator for whenever he goes to eat in a restaurant. In his country, it's usual to tip 15% if the bill value is between 50 and 300. If the value is different, the tip is 20%.

Your tasks:

    Calculate the tip, depending on the bill value. Create a variable called tip for this. It's not allowed to use an if...else statement (if it's easier for you, you can start with an if...else statement, and then try to convert it to a ternary operator).

    Print a string to the console containing the bill value, the tip, and the final value (bill + tip).

    Example: The bill was 275, the tip was 41.25, and the total value 316.25.

    Note: Use the values of the bill and tip variables to construct this string. Don't hard-code them 🙂

TEST DATA: Test with different bill values: 275, 40, and 430

HINT: To calculate 20% of a value, simply multiply it by 20/100 = 0.2

HINT 2: Value X is between 50 and 300, if it's >= 50 && <= 300 😉

*/

/* const amount = Number(prompt("Enter your bill"));
const tip = (15 / 100) * amount;
console.log(
  amount >= 50 && amount <= 300
    ? `The bill was ${amount}, the tip was ${tip}, and the total Bill is ${
        tip + amount
      }`
    : `No tip`
);
 */
/* 
// Challenge # 3
const Mark = {
  fullname: "Mark Miller",
  mass: 78,
  height: 1.69,
  calcBMI: function () {
    return this.mass / (this.height * this.height);
  },
};

const John = {
  fullname: "John Smith",
  mass: 92,
  height: 1.95,
  calcBMI: function () {
    return this.mass / (this.height * this.height);
  },
};

if (Mark.calcBMI() > John.calcBMI()) {
  console.log(
    `${Mark.fullname} BMI (${Mark.calcBMI()}) is higher than ${
      John.fullname
    } (${John.calcBMI()})`
  );
} else {
  console.log(
    `${John.fullname} BMI (${John.calcBMI()}) is higher than ${
      Mark.fullname
    } (${Mark.calcBMI()})`
  );
}
 */

//Challenge # 4
/* 
let bills = [22, 295, 176, 440, 37, 105, 10, 1100, 86, 52];
let total = [];
let tips = [];

let calcTip = function (bill) {
  return bill >= 50 && bill <= 300 ? bill * 0.15 : bill * 0.2;
};

for (let i = 0; i <= 10; i++) {
  const tip = calcTip(bills[i]);
  tips.push(tip);
  total.push(tip + tips[i]);
}
console.log(bills, tips, total);

let calcAverage = function (arr) {
  let sum = 0;
  for (let i = 0; i < arr.length; i++) {
    sum = sum + arr[i];
  }
  return sum / arr.length;
};

console.log(calcAverage(bills));
 */

// Developer Tools Challenges
/* 
Given an array of forecasted maximum temperatures, the thermometer displays a
string with the given temperatures. Example: [17, 21, 23] will print "... 17ºC in 1
days ... 21ºC in 2 days ... 23ºC in 3 days ..."
Your tasks:
1.2.Create a function 'printForecast' which takes in an array 'arr' and logs a
string like the above to the console. Try it with both test datasets.
Use the problem-solving framework: Understand the problem and break it up
into sub-problems!
Main Problem
 what is forcasted maximum temperatures
what is thermometer displays
Divide the Problem into subproblem
*/
/* 
Failed to implement some functionality
const printForecast = function (arr) {
  for (let i = 0; i < arr.length; i++) {
    console.log(`... ${arr[i]}ºC in ${i + 1} days `);
  }
};

printForecast([12, 5, -5, 0, 4]);
 */
