<?php
    function add($string)
	{
		$len 	= strlen($string);
        for ( $i = $len - 1; $i >=0;$i-- )
        {
			echo $string[$i];
		} 
	}
    if(isset($_POST['submit'])){
        add($_POST["a1"]);
    } 
?>

<html>
     <body>
         <form method="post">
             <input type="text" name="a1">
             <input type="submit" name="submit" value="click">
         </form>
     </body>
</html>