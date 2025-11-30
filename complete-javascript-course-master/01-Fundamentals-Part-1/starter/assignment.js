"use strict";
/* const country = `pakistan`;
const continent = `Asia`;
let population = 25;
let halfPopulation = population / 2;
const isIsland = false;
let language = `Urdu`;
console.log(population, isIsland, language, country);
console.log(halfPopulation + 1);
population > 6
  ? `Pakistan population is greater than finland `
  : `Finland population is greater`;
let averagePopulation = 33;
console.log(
  averagePopulation > population
    ? `${country} population is ${
        averagePopulation - population
      } million less than average`
    : `Pakistan population is greater than average`
);
let description = `${country} is in ${continent}, and its ${population} million people speak ${language}`;
console.log(description);
 */
/* let numNeibours = Number(
  prompt("How many neighbour countries does your contry have?")
); 

if (numNeibours === 1) {
  console.log(`Only one border`);
} else if (numNeibours > 1) {
  console.log(`More than 1 border`);
} else {
  console.log(`No border found`);
}
*/
/* if (population < 50 && language === `Urdu` && isIsland === false) {
  console.log(`You should live in the ${country}`);
} else {
  console.log(`${country} does't meet your criteria`);
}

switch (language) {
  case `chinese`:
  case `mandarin`:
    console.log(`MOST number of native speakers!`);
    break;
  case "Spanish":
    console.log(`2nd place in number of native speakers`);
    break;
  case "English":
    console.log(`3rd place`);
  case `hindi`:
    console.log(`Number 4`);
  case `arabic`:
    console.log(`5th most spoken language`);
    break;
  default:
    console.log(`Great language too :D'`);
}

console.log(
  population > averagePopulation
    ? `${country} population is above the average`
    : `${country} population is below the average`
);
 */

// Fundamentals part 2

/* 
Write a function called describeCountry which takes three parameters: country, population and capitalCity. Based on this input, the function returns a string with this format: 'Finland has 6 million people and its capital city is Helsinki'.
*/
/* 
let describeCountry = function (country, population, capitalCity) {
  return `${country} has ${population} million people and its capital city is ${capitalCity}`;
};

let pakistanCountry = describeCountry("pakistan", 24, "Islambad");
let IndiaCountry = describeCountry("India", 1468, "Dehli");
let englandCountry = describeCountry("England", 57, "London");

console.log(pakistanCountry, IndiaCountry, englandCountry);
 */

/* 
The world population is 7900 million people. Create a function declaration called percentageOfWorld1 which receives a population value, and returns the percentage of the world population that the given population represents. For example, China has 1441 million people, so it's about 18.2% of the world population
*/
/* 
let percentageOfWorld1 = function (CountryName, CountryPopulation) {
  let percentage = (CountryPopulation / 7900) * 100;
  return `${CountryName} has ${CountryPopulation} million people, So it's about ${percentage} of the world population`;
};

function percentageOfWorld2(CountryName, CountryPopulation) {
  let percentage = (CountryPopulation / 7900) * 100;
  return `${CountryName} has ${CountryPopulation} million people, So it's about ${percentage} of the world population`;
}

let PakistanCountry = percentageOfWorld1("Pakistan", 24);
let EnglandCountry = percentageOfWorld1("England", 57);
let IndiaCountry = percentageOfWorld1("India", 1468);

let PakistanCountry2 = percentageOfWorld2("Pakistan", 24);
let EnglandCountry2 = percentageOfWorld2("England", 57);
let IndiaCountry2 = percentageOfWorld2("India", 1468);

console.log(PakistanCountry);
console.log(EnglandCountry);
console.log(IndiaCountry);

console.log(PakistanCountry2);
console.log(EnglandCountry2);
console.log(IndiaCountry2);
 */

/* 
let myFunction = (a, b) => a * b; 

*/
// Function calling other Functions
/* let percentageOfWorld2 = function (CountryPopulation) {
  return (CountryPopulation / 7900) * 100;
};

let percentageOfWorld1 = (CountryName, CountryPopulation) =>
  `${CountryName} has ${CountryPopulation} million people, So it's about ${percentageOfWorld2(
    CountryPopulation
  )} of the world population`;

let PakistanCountry = percentageOfWorld1("Pakistan", 24);
let EnglandCountry = percentageOfWorld1("England", 57);
let IndiaCountry = percentageOfWorld1("India", 1468);

console.log(PakistanCountry);
console.log(EnglandCountry);
console.log(IndiaCountry);
 */

/* 
Create an array containing 4 population values of 4 countries of your choice. You may use the values you have been using previously. Store this array into a variable called populations
*/
/* 
let percentageOfWorld2 = function (CountryPopulation) {
  return (CountryPopulation / 7900) * 100;
};

let arrayPopulation = [1468, 24, 57, 7];
let populations = arrayPopulation;
console.log(arrayPopulation.length === 4 ? true : false);
let percentages = [
  percentageOfWorld2(arrayPopulation[0]),
  percentageOfWorld2(arrayPopulation[1]),
  percentageOfWorld2(arrayPopulation[2]),
  percentageOfWorld2(arrayPopulation[3]),
];

console.log(arrayPopulation);
console.log(percentages);
 */

/* 
Create an array containing all the neighbouring countries of a country of your choice. Choose a country which has at least 2 or 3 neighbours. Store the array into a variable called neighbours.
*/
/* 
const arrayNeighbours = ["India", "Iran", "China", "Afganistan"];
let neighbours = arrayNeighbours;
arrayNeighbours.push("Utopia");
for (let i = 0; i < arrayNeighbours.length; i++) {
  console.log(arrayNeighbours[i]);
}
arrayNeighbours.pop();
console.log("After Utopia Gone");
for (let i = 0; i < arrayNeighbours.length; i++) {
  console.log(arrayNeighbours[i]);
}
console.log(
  arrayNeighbours.includes("Germany")
    ? "Germany is neighbours"
    : "Probably not a central european country :D"
);
arrayNeighbours[2] = "Republic of China";
 */

/* let myCountry = {
  countryName: "Pakistan",
  capital: "Islambad",
  language: "Urdu",
  population: 24,
  Neighbours: ["China", "Afganistan", "Iran", "India"],
  describe: function () {
    return `${this.countryName} has ${this.population} million ${this.language}-speaking people, ${this.Neighbours.length} neighbouring countries and a capital called ${this.capital}`;
  },
  checkIsland: function () {
    return this.Neighbours.length === 0 ? true : false;
  },
};
myCountry.isIsland = myCountry.checkIsland();
console.log(myCountry.describe());
console.log(myCountry.isIsland);
console.log(
  `${myCountry.countryName} has ${myCountry.population} million ${myCountry.language}-speaking people, ${myCountry.Neighbours.length} neighbouring countries and a capital called ${myCountry.capital}`
);

myCountry.population += 2;
console.log(myCountry.population);
myCountry["population"] -= 2;
console.log(myCountry.population);
 */

/* 

There are elections in your country! in a small town, there are only 50 voters. Use a for loop to simulate the 50 people voting, by logging a string like this to the console (for numbers 1 to 50): 'Voter number 1 is currently voting'.
*/
/* 
for (let number = 1; number <= 50; number++) {
  console.log(`Voter number ${number} is currently voting`);
}

let arrayPopulation = [1468, 24, 57, 7];
let percentages2 = [];

let percentageOfWorld2 = function (CountryPopulation) {
  return (CountryPopulation / 7900) * 100;
};
let i = 0;

while (i < 4) {
  percentages2.push(percentageOfWorld2(arrayPopulation[i]));
  i++;
}
console.log(percentages2);
*/

let listOfNeighbours = [
  ["Canada", "Mexico"],
  ["Spain"],
  ["Norway", "Sweden", "Russia"],
];
for (let i = 0; i < listOfNeighbours.length; i++)
  for (let y = 0; y < listOfNeighbours[i].length; y++)
    console.log(`Neighbour: ${listOfNeighbours[i][y]}`);
