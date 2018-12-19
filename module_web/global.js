// time before reset of session
var expires = 20;

var pages = [
	"index",
	"bases_html",
	"bases_css",
	"ex00",
	"ex01",
	"ex02"]

var menu_pages = [{
    ref: "index",
    image: "home.png"
}, {
    ref: "bases_html",
    image: "archinook.png"
}, {
    ref: "bases_css",
    image: "archibook2.png"
}, {
    ref: "ex00",
    image: "moustique-fish.png"
}, {
    ref: "ex01",
    image: "moustique-squirrel.png"
}, {
    ref: "ex02",
    image: "moustique-bird.png"
}];

/*		<a href="index.html">
			<div><img src="img/home.png"></div>
		</a>
		<a href="bases_html.html">
			<div><img src="img/archibook.png" style="opacity: 1;"></div>
		</a>
		<a href="bases_css.html">
			<div><img src="img/archibook2.png"></div>
		</a>
		<a href="ex00.html">
			<div><img src="img/moustique-fish.png"></div>
		</a>
		<a href="ex01.html">
			<div><img src="img/moustique-squirrel.png"></div>
		</a>
		<a href="ex02.html">
			<div><img src="img/moustique-bird.png"></div>
		</a>*/

function setCookie(cname, cvalue) {
    var d = new Date();
    d.setTime(d.getTime() + (expires * 60 * 1000));
    var expires = "expires=" + d.toUTCString();
    document.cookie = cname + "=" + cvalue + ";" + expires + ";path=/";
}

function getCookie(cname) {
    var name = cname + "=";
    var decodedCookie = decodeURIComponent(document.cookie);
    var ca = decodedCookie.split(';');
    for (var i = 0; i < ca.length; i++) {
        var c = ca[i];
        while (c.charAt(0) == ' ') {
            c = c.substring(1);
        }
        if (c.indexOf(name) == 0) {
            return c.substring(name.length, c.length);
        }
    }
    return "";
}

function customjoin(array)
{
	var l = "";
	for (let x of array)
	{
		console.log(x);
		l = l + x + " ";
	}
	l = l.slice(0, l.length - 1);
	return (l);
}

var visited;

function main() {
	console.log(window.location.pathname.slice(1).split(".html")[0]);
    visited = getCookie("visited");
    if (visited == "")
    {
    	for(let x = 0; x < pages.length - 1; x++)
    		visited = visited + "0" + ".";
    	visited = visited + "0";
    }
    console.log(visited);
    visited = visited.split(".");
    visited[pages.indexOf(
    	window.location.pathname.slice(1))] = 1;
    visited["lol"] = 1;
    setCookie("visited", customjoin(visited));
    var menu = $("#top-menu");
    //n.append(jQuery('<img>',{src: homeurl, class: "attendanceEdit", alt: "edit"}));
}

main();
