// sum of digits
// Example: 1234 → 1+2+3+4 = 10

//  function sod() {
//         let num = Number(document.getElementById("num").value);
//         let total = 0;
//         while (num > 0) {
//           digit = num % 10;
//           total += digit;
//           num = Math.floor(num / 10);
//         }
//         document.getElementById("result").value = total;
//       }

//Find the vowels (a, e, i, o, u) in given string

// function vowels() {
//   let str = document.getElementById("str").value;
//   let vwl = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"];
//   let result = 0;

//   for (let i = 0; i < str.length; i++) {
//     if (vwl.includes(str[i])) {
//       result++;
//     }
//   }

//   document.getElementById("result").value = result;
// }


// reverse the given number

// function reverse(){
//     let num = document.getElementById("num").value;
//     let rev = 0;

//     while(num > 0){
//         digit = num % 10;
//         rev = rev * 10 + digit;
//         num = Math.floor(num / 10);
//     }

//     document.getElementById("result").value = rev;
// }

//Return the highest number in givin list

// function highest(){
//     let list = document.getElementById("list").value;
//     let arr = list.split(",").map(Number);
//     let high = arr[0];
//     for(let i = 1; i < arr.length; i++){
//         if(arr[i] > high){
//             high = arr[i];
//         }
//     }

//     document.getElementById("result").value = high;
// }
