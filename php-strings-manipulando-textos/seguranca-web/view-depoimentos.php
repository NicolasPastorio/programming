<!DOCTYPE html>
<html lang="pt-br" dir="ltr">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, user-scalable=no, initial-scale=1.0, masimum-scale=1">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Depoimentos</title>
  </head>
  <body>
    <section>
      <h1>Novo depoimento</h1>
      <form action="novo.php" method="post">
        <textarea name="depoimento" rows="8" cols="80"
          id="depoimento" aria-label="Deixe seu depoimento aqui"></textarea>
          <br>
          <input type="submit" value="Enviar">
      </form>
    </section>
    <section>
      <h1>Depoimentos</h1>
      <ul>
        <?php foreach($depoimentos as $depoimento): ?>
          <li><? $depoimento ?></li>
        <?php endforeach; ?>
      </ul>
    </section>
  </body>
</html>
