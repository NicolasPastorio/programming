const listaDeAlunos = [
  'João', 'Juliana', 'Ana', 'Caio',
  'Lara', 'Marjorie', 'Guilherme',
  'Aline', 'Fabiana', 'Andre',
  'Carlos', 'Paulo', 'Bia', 'Vivian',
  'Isabela', 'Vinícius', 'Renan',
  'Renata', 'Daisy', 'Camilo'
]

// const lista01 = listaDeAlunos.slice(0, 10)
// console.log(lista01)
// const lista02 = listaDeAlunos.slice(10)
// console.log(lista02)

const lista01 = listaDeAlunos.slice(0, (listaDeAlunos.length)/2)
console.log(lista01)
const lista02 = listaDeAlunos.slice((listaDeAlunos.length)/2)
console.log(lista02)
