//conversão implicita
const valor = 456
const valor01 = '456'

console.log(valor == valor01)
console.log(valor + valor01)
console.log(valor, " = ", typeof valor)
console.log(valor01 + " = " + typeof valor01)

//conversão explicita
console.log(valor + Number(valor01))
