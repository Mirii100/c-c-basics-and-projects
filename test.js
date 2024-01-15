let key=document.getElementById('hello');
key.onclick=()=>{
    let men=prompt("what's  your name");
    document.write(men);
}
//people counter app
 let count=0;
 const counter=document.getElementById("count");
const id2=document.getElementById("h2").onclick=()=>{
    
    count++
    counter.textContent=count;
};

const id3=document.getElementById("h3").onclick=()=>{
    count=0;
    counter.textContent=count;
};

const id1=document.getElementById("h1").onclick=()=>{
    count--;
    counter.textContent=count;
};
//end of people counter app
const mylabel=document.getElementById('mylabel');
let rand=document.getElementById('random').onclick=()=>{
   let c= Math.random()*50;
   let d=Math.floor(c)
   //console.log(c);
mylabel.textContent=d;
}
 //demonstrating map method 
 const fruits=["apples","mangoes","ovacados","passionfruits"];
 const upperfruits=fruits.map(uppercase);
 function uppercase(element){
return element.toUppercase();
 }
 console.log(upperfruits);
 //how to create  a class 
 class product{
    //declaration of constructor 
    constructor(name,price)
    {this.name=name;
        this.price=price
    }
    //creating a method inside a class
    //inside a class we don't need  a function key word  to create a function
    displayproduct()
    {
        console.log(`product:${this.name}`);
    }
}

const product1=new product("michele",99);
//accesing elements of a class
product1.displayproduct();
//expected answer 
 product:michele
let product2=new product("Alex",100);
product2.displayproduct()
//:Alex is the expected answer
//inheritance 
//use extend key word
//for instance product will be our parents class
//an i have left class first
const firstName=document.getElementById("firstname");
const lastName=document.getElementById("lastname");
const subm=document.getElementById("sub");
 subm.onclick=()=>{
    confirm("where are you there").valueOf(true);
    
}
class names{
    constructor(firstName,lastName){
        this.firstName=firstName;
        this.lastName=lastName
    }
    setfirstname(newfirstname){
this._firstName=newfirstname;
if (newfirstname==='') {
    document.write('not a string');
}
    }
    setlastname(newlastname){
        this._lastName=newlastname;
        if (newlastname==='') {
            document.write('not a string');
        }
            }
            getfirstname(newfirstname){
document.write(this._firstName);
            }
            getlastname(newlastname){
                this._firstName=newlastname;
                document.write(this._lastName)
            }
}
let namme= new names("alex","njuguna");
console.log(namme);
