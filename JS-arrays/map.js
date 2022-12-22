const notas = [10, 9.5, 8, 7, 6]

// notas.map(() => {})
const notasAtualizadas = notas.map((nota) => {
  return nota + 1 >= 10 ? 10 : nota + 1;
})
console.log(notas)
console.log(notasAtualizadas)

//O método map() é apropriado para sobrescrever arrays,
//porém ele não modifica o array original.
