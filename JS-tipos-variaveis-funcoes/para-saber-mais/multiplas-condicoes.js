let num = 11

if(num > 10 || !num){
  console.log('Número não válido')
}
if(num > 10 && num < 20){
  console.log('Número válido')
}

function verificaNumero(numero){
  if(numero > 10){
    return 'Número maior que 10'
  }else{
    return 'Número não é maior que 10'
  }
}
console.log(verificaNumero(9))

const numero = 15

if(numero >= 0 && numero <= 10){
  console.log('Número entre zero e dez')
}else if(numero > 10 && numero <= 20){
  console.log('Número entre dez e vinte')
}else if(numero > 20 && numero <= 30){
  console.log('Número entre vinte e trinta')
}else{
  console.log('Outron número')
}
