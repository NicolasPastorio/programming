const nomes = ['ana Julia', 'Caio vinicius', 'BIA silva']

const nomesPadronizados = nomes.map(function(valores){
    valores = valores.toLowerCase()
    let novoNome = valores.split(' ')

    let nome = novoNome[0]
    nome = nome.charAt(0).toUpperCase() + novoNome[0].substring(1)
    let sobrenome = novoNome[1]
    sobrenome = sobrenome.charAt(0).toUpperCase() + novoNome[1].substring(1)

    let nomeCompleto = nome + ' ' + sobrenome

    return nomeCompleto
})

console.log(nomes)
console.log(nomesPadronizados)
