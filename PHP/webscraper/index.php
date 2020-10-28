<?php

$html = file_get_contents("https://www.globo.com");

libxml_use_internal_errors(true);

$domDocument = new DomDocument();
$domDocument->loadHTML($html);
$linkTags = $domDocument->getElementsByTagName("a");

$linkList = "";

foreach($linkTags as $link) {
    $href = $link->getAttribute('href');

    if(!empty($href))
        $linkList .= $link->getAttribute('href') . "\n";
}

file_put_contents("lista_de_links.txt", $linkList);