(function(_ds){var window=this;var f1=function(){var a=Element;return b=>b instanceof a},g1=function(a){return(0,_ds.Q)('<span class="devsite-tooltip-msg">'+_ds.R(a.Ur)+"</span>")};var h1=["dl.google.com"],i1="abc.xyz admob.com android.com blogger.com blogspot.com chrome.com chromium.org domains.google doubleclick.com feedburner.com g.co ggpht.com gmail.com gmodules.com goo.gl google.com google.org googleapis.com googleapps.com googlecode.com googledrive.com googlemail.com googlesource.com googlesyndication.com googletagmanager.com googleusercontent.com gv.com keyhole.com madewithcode.com panoramio.com urchin.com withgoogle.com youtu.be youtube.com ytimg.com".split(" "),j1=
function(a){const b=Array.from(document.querySelectorAll(".devsite-article-body [title]"));for(const c of b){let d;c.setAttribute("data-title",null!=(d=c.getAttribute("title"))?d:"");c.removeAttribute("title")}if(a.hasAttribute("blocked-link")){a=Array.from(document.getElementsByTagName("a"));for(const c of a)if(a=c.getAttribute("href")){const d=(new URL(a,document.location.origin)).hostname.replace("www.","");!h1.some(e=>-1!==d.indexOf(e))&&i1.some(e=>-1!==d.indexOf(e))&&(c.setAttribute("data-title",
"This link may not be accessible in your region."),c.removeAttribute("title"))}}},n1=function(a){a.eventHandler.listen(document.body,"devsite-content-updated",()=>{a.o.g()});a.eventHandler.listen(document.body,"onpointermove"in window?"pointermove":"mousemove",b=>{if(b=b.Y.composedPath()){var c=!1,d=null;for(d of b)if(f1()(d)&&(c=k1(d)),c)break;d&&c?l1(a,d):m1(a)}});a.eventHandler.listen(document.body,"focusin",b=>{b=b.target;const c=b.firstElementChild;(b.classList.contains("devsite-nav-title")&&
c?k1(c):k1(b))?l1(a,b):m1(a)});a.eventHandler.listen(document.body,["devsite-sticky-scroll","devsite-sticky-resize"],()=>{m1(a)})},m1=function(a){if(a.g){a.g=null;var b=a.h;a.h=null;b&&(_ds.Gf(b,_ds.qf,()=>{_ds.Zh(b);_ds.Wh(b)}),window.setTimeout(()=>{_ds.Zh(b);_ds.Wh(b)},1E3),b.style.opacity="0")}},k1=function(a){return a.hasAttribute("no-tooltip")?!1:a.hasAttribute("data-title")||a.hasAttribute("data-tooltip")||a.hasAttribute("tooltip")&&a.clientWidth<a.scrollWidth},l1=function(a,b){if(a.g!==b){m1(a);
var c,d=b.getAttribute("data-tooltip")||b.getAttribute("data-title")||(null!=(c=b.textContent)?c:"").trim(),e=_ds.M(g1,{Ur:d});e.style.opacity="0";document.body.appendChild(e);d=_ds.Oh(window);var f=_ds.$k(b),g=_ds.$k(e),h=_ds.Uk(b);c=h.y+f.height;c+g.height+8>d.height&&(c=h.y-g.height-16);f=h.x+f.width/2-g.width/2;g.width>d.width?f=0:(f=Math.max(f,8),d=d.width-(f+g.width+8),0>d&&(f=f+d-8));e.style.top=`${c}px`;e.style.left=`${f}px`;a.g=b;a.h=e;window.requestAnimationFrame(()=>{e.style.opacity="1"})}},
o1=class extends _ds.DF{constructor(){super();this.eventHandler=new _ds.G;this.h=this.g=null;this.o=new _ds.Ek(()=>void j1(this),250)}connectedCallback(){document.body.hasAttribute("touch")?_ds.Zh(this):(n1(this),this.o.g())}disconnectedCallback(){super.disconnectedCallback();_ds.I(this.eventHandler)}};try{window.customElements.define("devsite-tooltip",o1)}catch(a){console.warn("devsite.app.customElement.DevsiteTooltip",a)};})(_ds_www);