// time before reset of session
var expires = 20;

var imgpath = "/img/";

var locale = "fr";

var currentPage = 4;

var visited;

var pages = [
    {
        ref: "home",
        image: "home.png",
        exercice_type: 0
    },
    {
        ref: "bases_html",
        image: "archibook.png",
        exercice_type: 0
    },
    {
        ref: "bases_css",
        image: "archibook2.png",
        exercice_type: 2
    },
    {
        ref: "ex00",
        image: "moustique-fish.png",
        exercice_type: 2
    },
    {
        ref: "ex01",
        image: "moustique-squirrel.png",
        exercice_type: 2
    },
    {
        ref: "ex02",
        image: "moustique-bird.png",
        exercice_type: 0
    }
];

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

function customjoin(array) {
    var l = "";
    for (let x = 0; x < array.length; x++)
        l = l + array[x] + ".";
    l = l.slice(0, l.length - 1);
    return (l);
}

function show_menu() {
    let pgs = visited;
    let i;
    let n;
    var menu = $("#top-menu");
    menu.html("");
    for (let x = 0; x < pgs.length; x++) {
        if (pgs[x] == 1) {
            i = $('<div>');
            n = $('<img>', {
                src: imgpath + pages[x].image
            });
            i.append(n);
            n = $('<a>', {
                onclick: "openPageNumber(" + x + ");"
            });
            n.append(i);
            menu.append(n);
        }
    }
}

function addEventListener() {
    let x = pages[currentPage].exercice_type;
    if (x == 2) {
        $("#UserCSS").on("input", function (){
            $("#CSSInput").html($("#UserCSS").val());
        });
        $("#UserHTML").on("input", function (){
            $("#UserResult").html($("#UserHTML").val());
        });
        $("#CSSInput").html($("#UserCSS").val());
        $("#UserResult").html($("#UserHTML").val());
    }
    else if (x == 1) {
        
    }
}

function updateHTML(x) {
    let css = document.getElementById("UserCSS").value;
    let HTML = document.getElementById("UserHTML").value;
    $("#CSSInput").html(css);
    document.getElementById("UserResult").innerHTML = HTML;
}

function show_content() {
    visited = getCookie("visited");
    if (visited == "") {
        for (let x = 0; x < pages.length - 1; x++)
            visited = visited + "0" + ".";
        visited = visited + "0";
    }
    visited = visited.split(".");
    let path = pages[currentPage].ref;
    $.ajax({
        type: "GET",
        url: "html/" + path + ".html",
        success: (function(data) {
            $("#page").html(data);
            $.ajax({
                type: "GET",
                url: "lang/" + locale + "/" + path + ".lang",
                success: (function(data) {
                    let elem = $('[data-text]');
                    let text = data.split("<text>");
                    text = text.slice(1);
                    for (let x = 0; x < elem.length; x++)
                        $(elem[x]).html(text[x]);
                    addEventListener();
                }
                )
            })
        }
        )
    });
    if (currentPage < pages.length - 1 && currentPage != 0)
        $("#nextPageButton").show();
    else
        $("#nextPageButton").hide();
    if (currentPage > 0)
        $("#previousPageButton").show();
    else
        $("#previousPageButton").hide();
    if (visited[currentPage] != 1) {
        visited[currentPage] = 1;
        setCookie("visited", customjoin(visited));
        show_menu();
    }
}

function changeLocale_content() {
    let path = pages[currentPage];
    $.ajax({
        type: "GET",
        url: "lang/" + locale + "/" + path,
        success: (function(data) {
            let elem = $('[data-text]');
            let text = data.split("<text>");
            text = text.slice(1);
            for (let x = 0; x < elem.length; x++)
                $(elem[x]).html(text[x]);
            addEventListener();
        }
        )
    });
}

function main() {
    if (window.location.pathname == "/index.html")
        window.location.href = "http://localhost:8000";
    setCookie("visited", "");
    show_content();
}

function nextPage() {
    openPageNumber(currentPage + 1);
}

function previousPage() {
    openPageNumber(currentPage - 1);
}

function openPageNumber(nb) {
    currentPage = nb;
    show_content();
}

function changeLocale(language) {
    locale = language;
    changeLocale_content();
}

main();