let nomeCompleto = 'ana julia'
console.log(nomeCompleto)

let novoNome = nomeCompleto.split(' ')
console.log(novoNome)

let nome = novoNome[0]
nome = nome.charAt(0).toUpperCase() + novoNome[0].substring(1)
let sobrenome = novoNome[1]
sobrenome = sobrenome.charAt(0).toUpperCase() + novoNome[1].substring(1)
console.log(nome, sobrenome)
