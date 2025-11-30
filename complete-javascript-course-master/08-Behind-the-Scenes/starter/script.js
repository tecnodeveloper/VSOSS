'use strict';

/* function calage(birthyear) {
  const age = 2025 - birthyear;
  function printage() {
    const output = `${firstname} has the ${age} age and birthyear is ${birthyear}`;
    console.log(output);
    if (birthyear >= 2000 && birthyear <= 2010) {
      let str = `You are GenZ`;
      console.log(str);
    }
  }
  printage();
  }
  
  let firstname = 'Zain Ali';
  calage(2004);
  //printage(); Printage is not defined (means scope error remember that)
  
  // console.log(a);
  // console.log(b);
  // console.log(c);
  console.log(add(1, 1));
  
  output(1, 3);
  var a = 1; //Undefined
  let b = 2; //Cannot access before intiailization
  const c = 3; //cannot access before intialization
  
  function add(a, b) {
    return a + b;
}

let output = function (a, b) {
    // cannot access output before intialization
    console.log(`Output is ready`);
};

*/
//Define object
/* const zain = {
  firstname: 'zain',
  lastname: 'ALi',
  age: 18,
  birthyear: function () {
    return 2025 - age;
  },
};

const sum = function (a, b) {
  return a + b;
}; */

// console.log(sum(1, 1));
// console.log(this.sum(1, 1)); Function declared simple function sum(a,b) are accessible on global window object
// console.log(window.sum(2, 3));

var fname = 'zain';

let zain = {
  name: 'Zain',
  age: 21,
  phone: '03161047363',
  siblings: { brother: 'salman', sister: 'Tehseen & Ayesha' },
};

//Shallow Copy -> object inside object are reference not copied(first type copy)
/* const zainCopy = { ...zain };
zainCopy.siblings.brother = 'Salman Kuch b nahi';

zainCopy.name = 'zain Copy';
console.log('After', zain);
console.log('Before', zainCopy);
 */

//Deep Copy -> object inside object are also completely copied(full type copy)
/* const zainCopy = structuredClone(zain);
zainCopy.name = 'zain Copy';
zainCopy.siblings.brother = 'Salman Kuch b nahi';
console.log('After', zain);
console.log('Before', zainCopy);
 */
/* 
if (!true && true) {
  console.log('true');
} else {
  console.log('false');
}
*/

// Function Defination
function add(a, b) {
  return a + b;
}

const name = 'zain';
const age = calage(2004);
let newAge = age;
newAge++;
let place = {
  city: 'Gujranwala',
  country: 'pakistan',
};

let newLocation = place;
newLocation.city = 'Lahore';
console.log(place);

function calage(age) {
  return 2025 - age;
}
