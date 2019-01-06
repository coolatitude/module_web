let langR = $("#langR");
let langL = $("#langL");
let select = $("#pageSelect");
let R = "right"
  , L = "left";
let locR, locL;
let path;

function main() {
    for (let i of languages){
        $("#languagesL").append($("<img>", {
            onclick : "changeLocale('" + i.locale + "', '" + L + "');",
            class : "locale",
            src : "flag_" + i.locale +".png"
        }));
        $("#languagesR").append($("<img>", {
            onclick : "changeLocale('" + i.locale + "', '" + R + "');",
            class : "locale",
            src : "flag_" + i.locale +".png"
        }));
    }
    for (let i = 0; i < pages.length; i++) {
        select.append($('<option>', {
            value: i,
            text: pages[i].ref
        }));
    }
    select.on("change", function() {
        showPage(this.value);
    });
    changeLocale("fr", "right");
    changeLocale("en", "left");
}

function save() {
    let x = $("#langR").children();
    let text = "";
    for (let xi of x) {
        text += "<text>" + $(xi).val();
    }
    console.log(text);
    $.post({
        url: "save/" + pages[select.val()].ref + "/" + locR,
        data: {
            content : text
            },
        success: (function (data){
            console.log(data);
        })
    });
}

function changeLocale(loc, side) {
    if (side == R) {
        $("#titles > :last").html(languages[languages.findIndex(e => e.locale === loc)].title);
        locR = loc;
        showPageText(select.val(), side);
        let x = $("#languagesR").children();
        for (let i = 0; i < x.length; i++){
            if (loc == languages[i].locale)
                $(x[i]).hide();
            else
                $(x[i]).show();
        }
    } else if (side == L) {
        $("#titles > :first").html(languages[languages.findIndex(e => e.locale === loc)].title);
        locL = loc;
        showPageText(select.val(), side);
        let x = $("#languagesL").children();
        for (let i = 0; i < x.length; i++){
            if (loc == languages[i].locale)
                $(x[i]).hide();
            else
                $(x[i]).show();
        }
    }
}

function showPage(page) {
    showPageText(page, "right");
    showPageText(page, "left");
}

function showPageText(page, side) {
    path = pages[page].ref;
    $.ajax({
        type: "GET",
        url: (side == "right" ? locR : locL) + "/" + path + ".lang",
        success: (function(data) {
            let lang = (side == R ? langR : langL);
            let text = data.split("<text>");
            text = text.slice(1);
            lang.html("");
            for (let i = 0; i < text.length; i++) {
                lang.append($('<textarea>', {
                    text: text[i],
                    readonly : (side == R ? false : true)
                }));
            }
        }
        )
    });
}

main();