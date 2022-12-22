const salaJS = [7, 8, 8, 7, 10, 6.5, 4, 10, 7]
const salaJava = [6, 5, 8, 9, 5, 6]
const salaPython = [7, 3.5, 8, 9.5]

const mediaDaTurma = salaPython.filter((_, indice) => {
  return (salaJS[indice] + salaJava[indice] + salaPython[indice]) / 2;
})
console.log(mediaDaTurma)
