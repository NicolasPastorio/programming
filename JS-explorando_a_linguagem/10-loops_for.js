console.log('\n Trabalhando com condicionais e loops')
const listaDeDestinos = new Array(
  'Salvador',
  'São Paulo',
  'Rio de Janeiro'
)

const idadeComprador = 25
const estaAcompanhada = false
let temPassagemComprada = false
const destino = 'Salvador'

console.log('\n Destinos possíveis')
console.log(listaDeDestinos)

const podeComprar = idadeComprador >= 18 || estaAcompanhada == true

// let contador = 0
let destinoExiste = false

for(let contador = 0; contador < 3; contador++){
  if(destino == listaDeDestinos[contador]){
      destinoExiste = true
      break
  }
  // contador++
}

if(destinoExiste){
  console.log(`O destino ${destino} existe na lista!`)
}else{
  console.log(`O destino ${destino} não está na lista!`)
}

if(podeComprar && destinoExiste){
  console.log('Boa Viagem')
}else{
  console.log('Desculpe, tivemos um erro!')
}
