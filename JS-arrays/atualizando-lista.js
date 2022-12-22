const lista =  [
  'João', 'Ana', 'Caio', 'Lara',
  'Marjorie', 'Leo'
]
console.log('lista da alunos')
console.log(lista)

// removendo Ana e Caio e adicionando o Rodrigo
lista.splice(1, 2, 'Rodrigo')
console.log('lista atualizada')

console.log(lista)
