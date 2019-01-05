let textarea = $("#texte");
let select = $("#pageSelect");
let path;

function main() {
    for (let i = 0; i < pages.length; i++) {
        select.append($('<option>', {
            value: i,
            text: pages[i].ref
        }));
    }
    select.on("change", function() {
        showPage(this.value);
    });
    showPage(0);
}

function save() {
    console.log("ERROR");
}

function changeLocale(loc) {
    locale = loc;
    showPageText(select.val());
}

function showPage(page){
    path = pages[page].ref;
    $.ajax({
        type: "GET",
        url: "/" + path + ".html",
        success: (function(data) {
            $("#html").html(data);
            showPageText(page);
        }) 
    });
}

function showPageText(page) {
    path = pages[page].ref;
    $.ajax({
        type: "GET",
        url: locale + "/" + path + ".lang",
        success: (function(data) {
            let text = data.split("<text>");
            text = text.slice(1);
            textarea.html("");
            for (let i = 0; i < text.length; i++) {
                textarea.append($('<textarea>', {
                    html : text[i]
                }));
            }
        }
        )
    });
}

main();
