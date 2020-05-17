// JavaScript ES6
const alphabet = () => {
  // retrieve the letters with the use of ascii code
  const letters = String.fromCharCode(...[...Array(26)].map((_, i) => i+65));
  // convert string to array
  console.log(Array.from(letters));
}

alphabet();