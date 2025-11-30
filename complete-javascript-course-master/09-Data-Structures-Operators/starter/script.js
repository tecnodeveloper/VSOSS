'use strict';
// Starter files
/* 
// Data needed for a later exercise
const flights =
  '_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30';

const italianFoods = new Set([
  'pasta',
  'gnocchi',
  'tomatoes',
  'olive oil',
  'garlic',
  'basil',
]);

const mexicanFoods = new Set([
  'tortillas',
  'beans',
  'rice',
  'tomatoes',
  'avocado',
  'garlic',
]);

// Data needed for first part of the section
const restaurant = {
  name: 'Classico Italiano',
  location: 'Via Angelo Tavanti 23, Firenze, Italy',
  categories: ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'],
  starterMenu: ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad'],
  mainMenu: ['Pizza', 'Pasta', 'Risotto'],

  openingHours: {
    thu: {
      open: 12,
      close: 22,
    },
    fri: {
      open: 11,
      close: 23,
    },
    sat: {
      open: 0, // Open 24 hours
      close: 24,
    },
  },
};
 */

// Deconstructing the array.

/*
const restaurant = {
  name: 'Classico Italiano',
  location: 'Via Angelo Tavanti 23, Firenze, Italy',
  categories: ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'],
  starterMenu: ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad'],
  mainMenu: ['Pizza', 'Pasta', 'Risotto'],
};
let arr = [2, 3, 4, 5];
const [a = 1, b = 1, c = 1, d = 1, e = 1, f = 1, g = 1] = arr;
console.log(a, b, c, d, e, f, g);

 let a = arr[0];
let b = arr[1];
let c = arr[2];
let d = arr[3]; 


//swapping of element

let [main, second] = [restaurant.categories[0], restaurant.categories[1]];
console.log(main, second);
[second, main] = [main, second];
console.log(main, second);
*/

// Destructuring Objects
/* const restaurant = {
  name: 'Classico Italiano',
  location: 'Via Angelo Tavanti 23, Firenze, Italy',
  categories: ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'],
  starterMenu: ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad'],
  mainMenu: ['Pizza', 'Pasta', 'Risotto'],

  openingHours: {
    thu: {
      open: 12,
      close: 22,
    },
    fri: {
      open: 11,
      close: 23,
    },
    sat: {
      open: 0, // Open 24 hours
      close: 24,
    },
  },
};
let orders = {
  zain: 2,
  salman: 3,
  tehseen: 4,
  ayesha: 1,
};

const {
  zain: zainOrders = 1,
  salman: salmanOrders = 1,
  tehseen: tehseenOrders = 1,
  ayesha: ayeshaOrders = 0,
} = orders;
console.log(zainOrders, salmanOrders, tehseenOrders, ayeshaOrders);

//Object function

function Name(obj) {
  console.log(
    `The Name is ${obj.Name} and age is ${obj.age} and city is ${obj.city}`
  );
}

Name({
  Name: 'Zain ali',
  age: 21,
  city: 'Grw',
});
*/

// Spread operator {...}

let arr = [1, 2, 3, 12];
// Added the array
let badNews = [6, 7, ...arr];
// console.log(badNews);
console.log(...badNews);
let zain = {
  name: 'Zain ali',
  Age: 21,
  City: 'Grw',
};

let salman = {
  Name: 'salman ali',
  age: 24,
  city: 'Grw',
};

//Combine object
const copyObj = { ...salman, ...zain };
console.log(copyObj);

//Combine two arrays
const restaurant = {
  name: 'Classico Italiano',
  location: 'Via Angelo Tavanti 23, Firenze, Italy',
  categories: ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'],
  starterMenu: ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad'],
  mainMenu: ['Pizza', 'Pasta', 'Risotto'],

  openingHours: {
    thu: {
      open: 12,
      close: 22,
    },
    fri: {
      open: 11,
      close: 23,
    },
    sat: {
      open: 0, // Open 24 hours
      close: 24,
    },
  },
};
// combine the value
const menu = [...restaurant.mainMenu, ...restaurant.starterMenu];

const ingredients = [
  // prompt('Enter the ingredient 1 '),
  // prompt('Ingredient 2'),
  // prompt('Ingredient 3'),
];

// console.log(...ingredients);

// Rest Pattern and Parameters

const [a, b, ...others] = [1, 2, 3, 34, 324, 123, 123, 1, 2, 3, 4, 5];

console.log([a, b, ...others]);

// const [pizza, risotto, ...otherFood] = {
//   ...restaurant.mainMenu,
//   ...restaurant.starterMenu,
// };

function Add(...parameter) {
  let sum = 0;
  for (let i = 0; i < parameter.length; i++) {
    sum = sum + parameter[i];
  }
  console.log(sum);
}

Add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
Add(12, 2, 1);

console.log(2 || 4);
