/*let myfunction= async()=>{
  return "hello";
}
myfunction().then((msg)=>{
  console.log(msg)
}*/
let data=async()=>{
  let msg= await 'this is the example of ansync and await';
  console.log(msg)
}
  console.log("before function call ")
data()
console.log("AFter function call")
