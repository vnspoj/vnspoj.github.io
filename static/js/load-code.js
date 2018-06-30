(() => {
  const { Prism, PerfectScrollbar } = window;

  const filename = $('#js-filename-code').attr('value');
  let lang = 'cpp';
  if (filename && filename.split('.').length > 0) {
    lang = filename.split('.')[1];
  }

  const ps = new PerfectScrollbar('#js-area-code', {
    wheelSpeed: 1.2
  });

  $.get(`https://vnspoj.github.io/solution/src/${filename}`, (code) => {
    const highlightCode = Prism.highlight(code, Prism.languages[lang]);
    $('#js-source-code').addClass(`language-${lang}`);
    $('#js-source-code').html(highlightCode);
  });

  $('#js-toggle-code').click(function () {
    $('#js-area-code').slideToggle(500, 'linear');
    const $this = $(this);
    if ($this.attr('data-visible') == '1') {
      $this.attr('data-visible', '0');
      $this.children('span.text').text('Show');
      $this.children('i.fa').removeClass('fa-eye-slash').addClass('fa-eye');
    } else {
      $this.attr('data-visible', '1');
      $this.children('span.text').text('Hide');
      $this.children('i.fa').removeClass('fa-eye').addClass('fa-eye-slash');
    }
  });
})();
