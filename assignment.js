"use strict";

function Person(fname, lname, oaddress) {
  this.firstName = fname;
  this.lastName = lname;
  this.officeAddress = oaddress;
}

const John = new Person(
  "John",
  "Smith",
  "Cecilia Chapman 711-2880 Nulla Mankato Mississippi"
);
console.log(John);

const Ron = new Person(
  "Ron",
  "Williams",
  "P.O. Box 283 8562 Fusce Rd.Frederick Nebraska"
);
console.log(Ron);

const Robert = new Person(
  "Robert",
  "Williams",
  "Celeste Slater606-3727 Ullamcorper. Street Roseville"
);
console.log(Robert);
