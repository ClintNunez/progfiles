(function(_ds){var window=this;var QY=function(a){return(0,_ds.Q)('<div class="devsite-popout" id="'+_ds.U(a.id)+'"><div class="devsite-popout-result devsite-suggest-results-container" devsite-hide></div></div>')},RY=function(a){a="All results in "+_ds.R(a);return(0,_ds.Q)('<button type="submit" class="button button-white devsite-search-project-scope">'+a+"</button>")},SY=function(a,b,c){let d='<button type="submit" class="button button-white devsite-suggest-all-results">';b?(a="All results across "+_ds.R(c),d+=a):(a='All results for "'+
_ds.R(a)+'"',d+=a);return(0,_ds.Q)(d+"</button>")},TY=function(a,b,c,d,e,f,g,h){a=(c?"":'<devsite-analytics-scope action="'+_ds.U(_ds.X("Restricted "+d))+'">')+'<a class="devsite-result-item-link" href="'+_ds.U(_ds.X(a))+'"><span class="devsite-suggestion-fragment">'+_ds.R(b)+"</span>"+(h?'<span class="devsite-suggestion-fragment">'+_ds.R(h)+"</span>":"")+(e?'<span class="devsite-suggestion-fragment">'+_ds.R(e)+"</span>":"")+(_ds.ow(f)&&!g?'<span class="devsite-suggestion-fragment">'+_ds.R(f)+"</span>":
"");c||(a+='<span class="devsite-result-item-confidential">Confidential</span>');return(0,_ds.Q)(a+("</a>"+(c?"":"</devsite-analytics-scope>")))},UY=function(a){var b=a.Tl,c=a.query,d=a.Zl,e=a.Rg;a='<div class="devsite-suggest-wrapper '+(d?"":"devsite-search-disabled")+'"><div class="devsite-suggest-section"><div class="devsite-result-label">There are no suggestions for your query</div></div>'+((d?'<div class="devsite-suggest-footer">'+(b?RY(a.projectName):"")+SY(c,b,e)+"</div>":"")+"</div>");return(0,_ds.Q)(a)},
VY=function(a){var b=a.Jq,c=a.Nq,d=a.Xq,e=a.projectName,f=a.Tl,g=a.query,h=a.gr,k=a.Zl;a=a.Rg;let l='<div class="devsite-suggest-wrapper '+(k?"":"devsite-search-disabled")+'" tabindex="0" role="list"><div class="devsite-suggest-section">';if(0<_ds.S(d).length){l=l+'<div class="devsite-suggest-sub-section" role="listitem"><div class="devsite-suggest-header" id="devsite-suggest-header-partial-query" role="heading" aria-level="2">Suggested searches'+((f?'<span class="devsite-suggest-project">'+_ds.R(e)+
"</span>":"")+'</div><devsite-analytics-scope category="Site-Wide Custom Events" label="Search" role="list" aria-labelledby="devsite-suggest-header-partial-query" action="Query Suggestion Click">');var m=d.length;for(var n=0;n<m;n++){var t=d[n];l+='<div class="devsite-result-item devsite-nav-label" id="suggestion-partial-query-'+_ds.U(n)+'" role="listitem" index=":'+_ds.U(n)+'">'+TY(t.Ua(),t.Oa(),_ds.We(t,14),"Query Suggestion Click")+"</div>"}l+="</devsite-analytics-scope></div>"}l+=0<_ds.S(d).length&&
0<_ds.S(b).length?'<hr role="none">':"";if(0<_ds.S(b).length){l=l+'<div class="devsite-suggest-sub-section" role="listitem"><div class="devsite-suggest-header" id="devsite-suggest-header-product" role="heading" aria-level="2">Pages'+((f?'<span class="devsite-suggest-project">'+_ds.R(e)+"</span>":"")+'</div><devsite-analytics-scope category="Site-Wide Custom Events" label="Search" role="list" aria-labelledby="devsite-suggest-header-product" action="Page Suggestion Click">');m=b.length;for(n=0;n<m;n++)t=
b[n],l+='<div class="devsite-result-item devsite-nav-label" id="suggestion-product-'+_ds.U(n)+'" role="listitem" index=":'+_ds.U(n)+'">'+TY(t.Ua(),t.Oa(),_ds.We(t,14),"Page Suggestion Click",void 0,_ds.y(t,4),f)+"</div>";l+="</devsite-analytics-scope></div>"}l+=0<_ds.S(h).length&&0<_ds.S(b).length+_ds.S(d).length?'<hr role="none">':"";if(0<_ds.S(h).length){l=l+'<div class="devsite-suggest-sub-section" role="listitem"><div class="devsite-suggest-header" id="devsite-suggest-header-reference" role="heading" aria-level="2">Reference'+
((f?'<span class="devsite-suggest-project">'+_ds.R(e)+"</span>":"")+'</div><devsite-analytics-scope category="Site-Wide Custom Events" label="Search" role="list" aria-labelledby="devsite-suggest-header-reference" action="Reference Suggestion Click">');m=h.length;for(n=0;n<m;n++)t=h[n],l+='<div class="devsite-result-item devsite-nav-label" id="suggestion-reference-'+_ds.U(n)+'" role="listitem" index=":'+_ds.U(n)+'">'+TY(t.Ua(),t.Oa(),_ds.We(t,14),"Reference Suggestion Click",_ds.y(t,3),_ds.y(t,4),
f,_ds.Ub(t,10)[0])+"</div>";l+="</devsite-analytics-scope></div>"}l+=0<_ds.S(c).length&&0<_ds.S(b).length+_ds.S(d).length+_ds.S(h).length?'<hr role="none">':"";if(0<_ds.S(c).length){l+='<div class="devsite-suggest-sub-section" role="listitem"><div class="devsite-suggest-header" id="devsite-suggest-header-other-products" role="heading" aria-level="2"><span role="columnheader">Products</span></div><devsite-analytics-scope category="Site-Wide Custom Events" label="Search" role="list" aria-labelledby="devsite-suggest-header-other-products" action="Product Suggestion Click">';
b=c.length;for(d=0;d<b;d++)h=c[d],l+='<div class="devsite-result-item devsite-nav-label" id="suggestion-other-products-'+_ds.U(d)+'" role="listitem" index=":'+_ds.U(d)+'">'+TY(h.Ua(),h.Oa(),_ds.We(h,14),"Product Suggestion Click")+"</div>";l+="</devsite-analytics-scope></div>"}l+="</div>"+(k?'<div class="devsite-suggest-footer">'+(f?RY(e):"")+SY(g,f,a)+"</div>":"")+"</div>";return(0,_ds.Q)(l)};var WY=/[ .()<>{}\[\]\/:,]+/,XY=0,cZ=function(a){a.g&&(a.h.listen(a.g,"suggest-service-search",b=>{a:{var c=a.D.querySelector(".highlight");if(c&&(c=c.querySelector(".devsite-result-item-link"))){c.click();break a}YY(a,b.detail.originalEvent,!!a.G)}}),a.h.listen(a.g,"suggest-service-suggestions-received",b=>void ZY(a,b)),a.h.listen(a.g,"suggest-service-focus",()=>{$Y(a,"cloud-track-search-focus",null);a.H=!0;aZ(a,!0)}),a.h.listen(a.g,"suggest-service-blur",()=>{aZ(a,!1)}),a.h.listen(a.g,"suggest-service-input",
()=>{!a.F["Text Entered Into Search Bar"]&&a.g.query.trim()&&(a.dispatchEvent(new CustomEvent("devsite-analytics-observation",{detail:{category:"Site-Wide Custom Events",label:"Search",action:"Text Entered Into Search Bar"},bubbles:!0})),a.F["Text Entered Into Search Bar"]=!0);a.H&&($Y(a,"cloud-track-search-input",null),a.H=!1)}),a.h.listen(a.g,"suggest-service-navigate",b=>void bZ(a,b)),a.h.listen(document.body,"devsite-page-changed",()=>a.F={}),_ds.pC(a.g));a.o&&a.h.listen(a.o,"submit",b=>{YY(a,
b)});a.D&&a.h.listen(a.D,"click",b=>{const c=b.target;if(c.closest(".devsite-result-item-link")){aZ(a,!1);let d;$Y(a,"cloud-track-search-submit",{query:null==(d=a.v)?void 0:d.value,ey:c})}c.classList.contains("devsite-search-project-scope")&&YY(a,b,!0)});a.M&&a.h.listen(a.M,"click",()=>void aZ(a,!0));a.V&&a.h.listen(a.V,"click",()=>void aZ(a,!1))},ZY=function(a,b){b=b.detail;var c=b.suggestions;b=b.query;if(a.g.query.toLowerCase().startsWith(b.toLowerCase()))if(c){var d=c.Pc();c=d.filter(t=>2===t.Td());
var e=d.filter(t=>3===t.Td()),f=d.filter(t=>4===t.Td()).slice(0,5),g=d.filter(t=>1===t.Td());d=c.length+f.length+g.length;for(var h of f)h.uf(_ds.kj(`${a.G||"/s/results"}/?q=${h.Oa()}`).toString());var k=b.split(WY);e.forEach(t=>_ds.CB(t,_ds.Ub(t,10).filter(v=>k.some(w=>v.includes(w)))));h=a.getAttribute("project-name")||"";var l=a.hasAttribute("project-scope"),m=a.hasAttribute("enable-search"),n=a.getAttribute("tenant-name")||"";c={Jq:c,projectName:h,Tl:l,Nq:g,Xq:f,query:b,gr:e,Zl:m,Rg:n};0===d?
_ds.L(a.C,UY,c):(_ds.L(a.C,VY,c),dZ(a,b));a.setAttribute("aria-expanded","true");a.C.removeAttribute("hidden")}else a.C.setAttribute("hidden",""),a.setAttribute("aria-expanded","false")},$Y=function(a,b,c=null){a.dispatchEvent(new CustomEvent(b,{detail:c,bubbles:!0}))},aZ=function(a,b){if(a.K!==b){_ds.lC(a.g,b);if(a.K=b)a.setAttribute("search-active","");else{let c=a.D.querySelector(".highlight");c&&c.classList.remove("highlight");a.removeAttribute("search-active");a.setAttribute("aria-expanded",
"false");_ds.Wh(a.C)}a.hasAttribute("capture")||a.dispatchEvent(new CustomEvent("devsite-search-toggle",{detail:{active:b},bubbles:!0}))}},bZ=function(a,b){var c=b.detail;b=a.C.querySelector(".highlight");let d;const e=Array.from(a.C.querySelectorAll(".devsite-result-item"));let f=[];let g,h=-1;if(b){var k=_ds.oi(b,l=>l.classList.contains("devsite-suggest-section"));f=Array.from(k.querySelectorAll(".devsite-result-item"));k=_ds.ci(b.parentNode.parentNode);g=_ds.di(b.parentNode.parentNode);h=e.indexOf(b)}switch(c.keyCode){case 37:if(!k&&
!g)return;b&&(c=b.getAttribute("index"),g?(d=g.querySelector('[index="'+c+'"]'))||(d=_ds.Na(Array.from(g.querySelectorAll("[index]")))):k&&((d=k.querySelector('[index="'+c+'"]'))||(d=_ds.Na(Array.from(k.querySelectorAll("[index]"))))));break;case 39:if(!k&&!g)return;b&&(c=b.getAttribute("index"),k?(d=k.querySelector('[index="'+c+'"]'))||(d=_ds.Na(Array.from(k.querySelectorAll("[index]")))):g&&((d=g.querySelector('[index="'+c+'"]'))||(d=_ds.Na(Array.from(g.querySelectorAll("[index]"))))));break;case 38:b?
(d=e[h-1])||(d=_ds.Na(f)):d=_ds.Na(e);break;case 40:b?(d=e[h+1])||(d=f[0]):d=e[0]}b&&(b.classList.remove("highlight"),b.removeAttribute("aria-selected"));d&&(a.v.setAttribute("aria-activedescendant",d.id),d.setAttribute("aria-selected","true"),d.classList.add("highlight"),d.scrollIntoViewIfNeeded&&d.scrollIntoViewIfNeeded()||d.scrollIntoView())},YY=async function(a,b,c=!1){b.preventDefault();b.stopPropagation();if(a.hasAttribute("enable-search")){a.F["Full Site Search"]||(a.dispatchEvent(new CustomEvent("devsite-analytics-observation",
{detail:{category:"Site-Wide Custom Events",label:"Search",action:"Full Site Search"},bubbles:!0})),a.F["Full Site Search"]=!0);let d;$Y(a,"cloud-track-search-submit",{query:null==(d=a.v)?void 0:d.value});b=c&&a.G?_ds.kj(a.G):_ds.kj(a.o.getAttribute("action"));c=new _ds.Fi(b.href);_ds.Si(c,"q",a.g.query);b.search=c.g.toString();await DevsiteApp.fetchPage(b.href,!a.hasAttribute("disable-history"));aZ(a,!1)}},dZ=function(a,b){b=new RegExp(`(${_ds.Bh(b)})`,"ig");a=a.C.querySelectorAll(".devsite-suggestion-fragment");
for(const c of a)a=c.innerHTML,a=a.replace(b,"<b>$1</b>"),_ds.Hc(c,_ds.Qg(a))},eZ=class extends _ds.E{static get observedAttributes(){return["project-scope","url-scoped","disabled"]}constructor(){super();this.K=!1;this.F={};this.J="";this.G=null;this.h=new _ds.G;this.g=null;this.H=!1}disconnectedCallback(){_ds.I(this.h);this.g&&(this.g.dispose(),this.g=null)}attributeChangedCallback(a,b,c){switch(a){case "project-scope":this.J=c||"";this.g&&(this.g.M=this.J);break;case "url-scoped":this.G=c;break;
case "disabled":this.v&&(this.v.disabled=null!==c)}}connectedCallback(){if(this.o=this.querySelector("form")){this.v=this.o.querySelector(".devsite-search-query");this.M=this.o.querySelector(".devsite-search-button[search-open]");this.V=this.querySelector(".devsite-search-button[search-close]");var a=`devsite-search-popout-container-id-${++XY}`;this.v.setAttribute("aria-controls",a);this.D=_ds.M(QY,{id:a});this.C=this.D.querySelector(".devsite-suggest-results-container");this.o.appendChild(this.D);
this.hasAttribute("project-scope")&&(this.J=this.getAttribute("project-scope"));this.hasAttribute("url-scoped")&&(this.G=this.getAttribute("url-scoped"));this.o&&this.v&&(this.g=new _ds.qC(this,this.o,this.v),this.g.m=!0,this.g.W=this.hasAttribute("enable-query-completion"),this.g.K=!0,this.g.N=!0,this.g.Z=!0,this.g.M=this.J,this.g.m=this.hasAttribute("enable-suggestions"));cZ(this)}}};eZ.prototype.connectedCallback=eZ.prototype.connectedCallback;eZ.prototype.attributeChangedCallback=eZ.prototype.attributeChangedCallback;
eZ.prototype.disconnectedCallback=eZ.prototype.disconnectedCallback;try{window.customElements.define("devsite-search",eZ)}catch(a){console.warn("devsite.app.customElement.DevsiteSearch",a)};})(_ds_www);
