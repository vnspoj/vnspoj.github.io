(() => {
    const filename = document.getElementById('js-filename-code').innerText;
    let lang = 'cpp';
    if (filename && filename.split('.').length > 0) {
        lang = filename.split('.')[1];
    }

    const xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function() {
        if (this.readyState == 4 && this.status == 200) {
            const code = this.responseText;
            const highlightCode = Prism.highlight(code, Prism.languages[lang], 'cpp');
            document.getElementById('js-source-code').innerHTML = highlightCode;
        }
    }
    xhttp.open('GET', 'https://vnspoj.github.io/solution/src/' + filename, true);
    xhttp.send();
})();