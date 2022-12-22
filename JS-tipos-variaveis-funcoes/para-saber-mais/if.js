let num = 10

if(num === null){
  console.log('número não fornecido')
}
if(num !== null){
  console.log(`O número é ${num}`)
}
if(num){
  console.log(`Novamente, o número é ${num}`)
}

num = null

if(num === null){
  console.log('Número não fornecido')
}
if(!num){
  console.log('Número não fornecido')
}
