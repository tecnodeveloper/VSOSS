// Remember, we're gonna use strict mode in all scripts now!
"use strict";

const measurement = function () {
  const measurementobject = {
    temp: "Temperature in celsius",
    value: Number(prompt("Enter the value in degree")),
  };
  const result = measurementobject.value + 273;
  return result;
};

console.log(measurement());
