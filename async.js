/*let myfunction= async()=>{
  return "hello";
}
myfunction().then((msg)=>{
  console.log(msg)
}
let data=async()=>{
  let msg= await 'this is the example of ansync and await';
  console.log(msg)
}
  console.log("before function call ")
data()
console.log("AFter function call")*/

int show =async()={
  let promise =new Promise((res,rej)=>{
    var marks=5;
    if(marks<=6){
    {
      res("accepted")
    }
    else{
      rej("Rejected")
    }
  }
  try{
    var result=await promise;
    console.log(result)
  }catch(error){
    console.log(error)
  }
} 
show()
