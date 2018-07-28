<?php
    function add($string)
	{
		$len 	= strlen($string);
		$count=0;
		$vowl = array('a','e','i','o','u');
        for ( $i =0; $i <$len;$i++)
        {
			for($j=0;$j<5;$j++)
			{
				if($string[$i] == $vowl[$j])
				{
					$count++;
					break;
				}
			}
		} 
		echo $count;
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