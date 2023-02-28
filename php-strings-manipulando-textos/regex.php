<?php

$telefones = ['(24) 99999 - 9999', '(21) 99999 - 9999', '(24) 92222 - 2222'];

foreach($telefones as $telefone){
  $regex = '/^\(([0-9]{2})\) (9?[0-9]{4} - [0-9]{4})$/';
  $telefoneValido = preg_match(
    $regex,//'/^(\([0-9]{2}\)) 9?[0-9]{4} - [0-9]{4}$/',
    $telefone,
    $correspondencia
  );
  // var_dump($correspondencia);
  if($telefoneValido){
    echo 'Telefone válido'. PHP_EOL;
  }else{
    echo 'Telefone inválido'. PHP_EOL;
  }

  echo preg_replace(
      $regex,//'/^\(([0-9]{2})\) (9?[0-9]{4} - [0-9]{4})$/',
      '(XX) \2',
      $telefone
  ). PHP_EOL;
}

// echo $correspondencia[1];
?>
