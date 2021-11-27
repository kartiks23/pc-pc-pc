"use strict";

function Person(fname, lname, oaddress) {
    this.firstName = fname;
    this.lastName = lname;
    this.officeAddress = oaddress;
}

const kartik = new Person(
    "Kartik ",
    "Sharma",
    "Kota Rajasthan"
);
console.log(kartik);

const swaraj = new Person(
    "swaraj",
    "daifode",
    "Mumbai Maharashtra"
);
console.log(swaraj);

const manvendra = new Person(
    "Manvendra",
    "Singh",
    "Kota Rajasthan"
);
console.log(manvendra);