const idadeMinima = 18
const idadeCliente = 19

if(idadeCliente >= idadeMinima){
  console.log('cerveja')
}else{
  console.log('suco')
}

//valor1 comparação valor2 ? 'caso true' : 'caso false'
//condição ? 'caso true' : 'caso false'
console.log(idadeCliente >= idadeMinima ? 'cerveja' : 'suco')

let resposta = idadeCliente >= idadeMinima ? 'velho barreiro' : 'suco de morango'
console.log(resposta)
