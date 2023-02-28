<?php

$idade = 17;
$numeroDePessoas = 2;

echo "Você só pode entrar se tiver a partir de 18 anos ou" . PHP_EOL;
echo "a partir de 16 anos acompanhado." . PHP_EOL;

// if($idade >= 18){
//     echo "Você tem $idade anos." . PHP_EOL;
//     echo 'Pode entrar sozinho!';
// }else{
//   if($idade >= 16 && $numeroDePessoas > 1){
//     echo "Você  tem $idade anos, está acompanhado, " . PHP_EOL;
//     echo 'então pode entrar!';
//   }else{
//     echo "Você só tem $idade anos." . PHP_EOL;
//     echo 'Não pode entrar!';
//   }
// }

$mensagem = $idade < 18 ? 'Você é menor de idade' : 'Você é maior de idade';
echo $mensagem;
echo PHP_EOL;

if($idade >= 18){
    echo "Você tem $idade anos." . PHP_EOL;
    echo 'Pode entrar sozinho!';
}else if($idade >= 16 && $numeroDePessoas > 1){
    echo "Você  tem $idade anos, está acompanhado, " . PHP_EOL;
    echo 'então pode entrar!';
}else{
    echo "Você só tem $idade anos." . PHP_EOL;
    echo 'Não pode entrar!';
}
