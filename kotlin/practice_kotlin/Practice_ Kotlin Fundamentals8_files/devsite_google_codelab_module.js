(function(_ds){var window=this;var s4=async function(a){let b=null;var c=new _ds.Xv;try{b=await c.oa()}catch(e){}if(!b||!b.profileId)return!1;c=_ds.F().href;try{c=await _ds.Nn(c)}catch(e){}const d=new _ds.Lv;try{return await d.Wc({path:c,status:a,profileId:`${b.profileId}`}),!0}catch(e){}return!1},t4=async function(a){let b=null;var c=new _ds.Xv;try{b=await c.oa()}catch(e){}if(!b||!b.profileId)return!1;c=_ds.F().href;try{c=await _ds.Nn(c)}catch(e){}const d=new _ds.Lv;try{return await d.Dg({path:c,profileId:`${b.profileId}`,voucher:a}),
!0}catch(e){}return!1},u4=class{async Df(){s4("STARTED")}async Cf(){return s4("COMPLETED")}async Ul(a){return t4(a)}};var v4=function(a,b,c){if(_ds.lm(a.storage)&&b){const d=a.storage.get(c);let e={};if(d)try{e=JSON.parse(d)}catch(f){console.warn("Could not deserialize codelab status from local storage"+` at path ${c}. Will start with an empty state.`)}e[b]=!0;a.storage.set(c,JSON.stringify(e));return!0}return!1},w4=class{constructor(){this.storage=new _ds.mm}async Df(a){v4(this,a,"started_codelabs")}async Cf(a){return v4(this,a,"completed_codelabs")}async Ul(){return!0}};var x4=function(a){var b=a.Zo,c=a.Xo;a='<div class="devsite-banner codelab-banner"><div class="devsite-banner-message medium"><a href="'+_ds.U(_ds.X(b))+'"><i class="material-icons">chevron_left</i><span>';c?(b="Back to "+_ds.R(c),a+=b):(b="Back to "+_ds.R(b),a+=b);return(0,_ds.Q)(a+"</span></a></div></div>")},y4=function(a){var b=a.result,c=a.total,d=a.kb;return(0,_ds.Q)("<android-codelab-grader voucherCode="+_ds.Bw(a.we)+' result="'+_ds.U(b)+'" total="'+_ds.U(c)+'"'+(d?' return-uri="'+_ds.U(_ds.X(d))+
'"':"")+"></android-codelab-grader>")};/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var z4=function(a,b){Array.isArray(b)||(b=[b]);b=b.map(function(c){return"string"===typeof c?c:c.Wq+" "+c.duration+"s "+c.timing+" "+c.delay+"s"});_ds.Ok(a,"transition",b.join(","))},A4=_ds.ih(function(){if(_ds.ce)return _ds.we("10.0");var a=_ds.Uh(document,"DIV"),b=_ds.ge?"-webkit":_ds.fe?"-moz":_ds.ce?"-ms":null,c={transition:"opacity 1s linear"};b&&(c[b+"-transition"]="opacity 1s linear");b=_ds.Ig("div",{style:c});_ds.kh(a,b);a=a.firstChild;b=a.style[_ds.Fh("transition")];return""!=("undefined"!==
typeof b?b:a.style[_ds.Nk(a,"transition")]||"")});var B4=function(a,b,c,d,e){_ds.oK.call(this);this.h=a;this.M=b;this.T=c;this.F=d;this.K=Array.isArray(e)?e:[e]};_ds.Gd(B4,_ds.oK);_ds.p=B4.prototype;_ds.p.Ee=function(){1!=this.g&&(this.C(),this.m("play"),this.startTime=_ds.Ed(),this.g=1,A4()?(_ds.Ok(this.h,this.T),this.H=_ds.Dk(this.Mq,void 0,this)):this.Nj(!1))};_ds.p.Mq=function(){_ds.$k(this.h);z4(this.h,this.K);_ds.Ok(this.h,this.F);this.H=_ds.Dk((0,_ds.Cd)(this.Nj,this,!1),1E3*this.M)};_ds.p.Ld=function(){1==this.g&&this.Nj(!0)};
_ds.p.Nj=function(a){_ds.Ok(this.h,"transition","");_ds.q.clearTimeout(this.H);_ds.Ok(this.h,this.F);this.endTime=_ds.Ed();this.g=0;a?this.m("stop"):this.m("finish");this.o()};_ds.p.va=function(){this.Ld();B4.Qa.va.call(this)};var C4=function(a){var b=a.Vp;a=a.Ab;let c='<div id="codelab-title"><div id="codelab-nav-buttons"><a href="'+_ds.U(_ds.X(b))+'" id="arrow-back"><i class="material-icons">close</i></a><a href="#" id="menu"><i class="material-icons">menu</i></a></div><div class="codelab-time-container"></div></div><nav id="drawer"></nav><div id="main"><div id="steps"></div><div id="controls"><div id="fabs"><a href="#" id="previous-step" title="';c+=_ds.xw("Previous step");c=c+'">Back</a><div class="spacer"></div><a href="#" id="next-step" title="'+
_ds.xw("Next step");c=c+'">Next</a><a href="'+(_ds.U(_ds.X(b))+'" id="done" hidden title="');c+=_ds.xw("Codelab complete");c=c+'">Done</a></div></div></div><div class="metadata"><a'+((a?' target="_blank" href="'+_ds.U(_ds.X(a))+'"':' href="#" id="codelab-feedback"')+'><i class="material-icons">bug_report</i> ');return(0,_ds.Q)(c+"Report a mistake</a></div>")},D4=function(a){var b=a.title;return(0,_ds.Q)('<h1 is-upgraded class="title"><a href="'+_ds.U(_ds.X(a.url))+'">'+_ds.R(b)+"</a></h1>")},E4=function(a){var b=
a.time;a='<div class="time-remaining" tabindex="0" role="timer" title="';if(1==b){var c="Estimated time remaining: "+_ds.U(b)+" minute";a+=_ds.xw(c)}else c="Estimated time remaining: "+_ds.U(b)+" minutes",a+=_ds.xw(c);a+='"><i class="material-icons">access_time</i>';1==b?(b=_ds.R(b)+" min remaining",a+=b):(b=_ds.R(b)+" mins remaining",a+=b);return(0,_ds.Q)(a+"</div>")},F4=function(a){a=a.steps;let b='<div class="codelab-time-container"></div><div class="steps"><ol>';const c=a.length;for(let d=0;d<
c;d++){const e=a[d];b+='<li><a href="#'+_ds.U(d)+'"><span class="step"><span>'+_ds.R(e)+"</span></span></a></li>"}return(0,_ds.Q)(b+"</ol></div>")};/*

 Copyright 2018 Google Inc.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
var G4=function(a){a.hash=`#${a.g}`;a.G&&a.ec.set(`progress_${a.G}`,String(a.g))},H4=function(a,b,c={}){b=new CustomEvent(b,{detail:c,bubbles:!0});a.dispatchEvent(b)},I4=function(a){if(a.C&&a.v){var b=new URL(document.location.href);b.hash="";b=_ds.M(D4,{title:a.C,url:b.href});document.title=a.C;var c=a.v.querySelector("h1");a=a.v.querySelector("#codelab-nav-buttons");c?_ds.$h(b,c):a.parentNode&&a.parentNode.insertBefore(b,a.nextSibling)}},L4=function(a){a.removeAttribute("drawer--open");let b=0;
if(a.hasAttribute("selected")){if(b=parseInt(a.getAttribute("selected"),10),b=Math.min(Math.max(0,b),a.steps.length-1),a.g!==b&&!isNaN(b)){var c=a.steps[b];if(-1===a.g)c.setAttribute("selected","");else{a.M&&a.M.Ld();a.T&&a.T.Ld();_ds.I(a.Ba);const d={},e={},f=a.steps[a.g];c.setAttribute("animating","");a.g<b?(d.transform="translate3d(110%, 0, 0)",e.transform="translate3d(-110%, 0, 0)"):(d.transform="translate3d(-110%, 0, 0)",e.transform="translate3d(110%, 0, 0)");const g=[{Wq:"transform",duration:.5,
delay:0,timing:"cubic-bezier(0.4, 0, 0.2, 1)"}];a.M=new B4(c,.5,d,{transform:"translate3d(0, 0, 0)"},g);a.T=new B4(f,.5,{transform:"translate3d(0, 0, 0)"},e,g);a.M.Ee();a.T.Ee();_ds.Ik(a.Ba,a.M,["finish","stop"],()=>{c.setAttribute("selected","");c.removeAttribute("animating")});_ds.Ik(a.Ba,a.T,["finish","stop"],()=>{f.removeAttribute("selected")})}a.g=b;J4(a);clearTimeout(a.fc);a.fc=setTimeout(()=>{c.focus()},500);a.J&&a.o&&a.X&&(0===b?(a.o.setAttribute("aria-hidden",""),a.o.setAttribute("disappear",
""),a.o.setAttribute("tabindex","-1")):(a.o.removeAttribute("aria-hidden"),a.o.removeAttribute("disappear"),a.o.removeAttribute("tabindex")),b===a.steps.length-1?(a.J.setAttribute("hidden",""),a.X.removeAttribute("hidden"),H4(a,"google-codelab-action",{category:"codelab",action:"complete",label:a.C})):(a.J.removeAttribute("hidden"),a.X.setAttribute("hidden","")));a.m&&a.m.querySelectorAll("li").forEach((d,e)=>{e<=b?d.setAttribute("completed",""):d.removeAttribute("completed");e===b?d.setAttribute("selected",
""):d.removeAttribute("selected")});K4(a)}}else a.setAttribute("selected",b)},M4=function(a){a.v&&(a.hasAttribute("no-toolbar")?a.v.setAttribute("hidden",""):a.v.removeAttribute("hidden"))},N4=function(a){a.N&&(a.hasAttribute("no-arrows")?a.N.setAttribute("hidden",""):a.N.removeAttribute("hidden"))},O4=function(a){J4(a);window.requestAnimationFrame(()=>{document.body.removeAttribute("unresolved");H4(a,"google-codelab-action",{category:"codelab",action:"ready"})})},P4=function(a){const b=document.querySelector("google-codelab-analytics");
if(b){const c=a.getAttribute("codelab-gaid");c&&b.setAttribute("codelab-gaid",c);a.G&&b.setAttribute("codelab-id",a.G);b.setAttribute("environment",a.getAttribute("environment"));b.setAttribute("category",a.getAttribute("category"))}},Q4=function(a){return a&&(a=parseInt(a.substring(1),10),!isNaN(a)&&a)?a:0},K4=function(a){if(a.Z&&a.Z.length){var b=0;for(let c=a.g;c<a.steps.length;c++){let d=parseInt(a.steps[c].getAttribute("duration"),10);d&&(b+=d)}Array.prototype.forEach.call(a.Z,c=>{if(b){var d=
_ds.M(E4,{time:b}),e=c.querySelector(".time-remaining");e?_ds.$h(d,e):c.appendChild(d)}else c.style.display="none"})}},R4=function(a){a.steps.forEach((b,c)=>{b.setAttribute("step",c)})},J4=function(a){H4(a,"google-codelab-pageview",{page:location.pathname+"#"+a.g,title:a.steps[a.g].getAttribute("label")})},S4=function(a){const b=a.steps.map(c=>c.getAttribute("label"));_ds.L(a.m,F4,{steps:b})},T4=function(){let a=(new URL(document.location.href)).searchParams.get("index");if(!a)return"/";a=a.replace(/[^a-z0-9\-]+/ig,
"");if(!a||""===a.trim())return"/";"index"===a&&(a="");return(new URL(a,document.location.origin)).pathname},U4=class extends HTMLElement{constructor(){super();this.X=this.N=this.o=this.J=this.v=this.Z=this.Hd=this.m=null;this.C=this.G="";this.fc=-1;this.steps=[];this.g=-1;this.h=new _ds.G;this.Ba=new _ds.G;this.vb=!1;this.T=this.M=null;this.ec=new _ds.mm}connectedCallback(){this.G=this.getAttribute("id");var a;(a=Q4(this.hash))||(a=parseInt(this.ec.get(`progress_${this.G}`),10),a=!isNaN(a)&&a?a:
0);this.setAttribute("selected",`${a}`);this.La();this.Ha();G4(this);this.vb||(this.vb=!0,H4(this,"google-codelab-ready"),this.setAttribute("google-codelab-ready",""))}disconnectedCallback(){_ds.I(this.h);_ds.I(this.Ba)}static get observedAttributes(){return"title codelab-title environment category feedback-link selected last-updated no-toolbar no-arrows anayltics-ready".split(" ")}attributeChangedCallback(a){switch(a){case "title":this.hasAttribute("title")&&(this.C=this.getAttribute("title"),this.removeAttribute("title"),
this.setAttribute("codelab-title",this.C));break;case "codelab-title":this.C=this.getAttribute("codelab-title");I4(this);break;case "selected":L4(this);G4(this);break;case "no-toolbar":M4(this);break;case "no-arrows":N4(this);break;case "anayltics-ready":this.hasAttribute("anayltics-ready")&&(this.vb?O4(this):this.h.listen(this,"google-codelab-ready",()=>O4(this)))}}get eventHandler(){return this.h}Ej(){this.setAttribute("selected",this.g+1)}Fj(){this.setAttribute("selected",this.g-1)}select(a){this.setAttribute("selected",
a)}get hash(){return window.location.hash}set hash(a){""!==a&&window.location.hash!==a&&window.history.replaceState({Rx:a},document.title,a)}Ha(){this.o&&this.h.listen(this.o,"click",b=>{b.preventDefault();b.stopPropagation();this.Fj()});this.J&&this.h.listen(this.J,"click",b=>{b.preventDefault();b.stopPropagation();this.Ej()});this.m&&(this.h.listen(this.m,"click",b=>{let c=b.target;for(;c!==this.m&&"A"!==c.tagName.toUpperCase();)b.preventDefault(),b.stopPropagation(),c=c.parentNode;c!==this.m&&
(b=(new URL(c.getAttribute("href"),document.location.origin)).hash,this.setAttribute("selected",`${Q4(b)}`))}),this.h.listen(this.m,"keydown",b=>{if(this.m){var c=this.m.querySelector(":focus"),d;c?d=c.parentNode:d=this.m.querySelector("[selected]");if(d){var e;38==b.keyCode?e=_ds.di(d):40==b.keyCode&&(e=_ds.ci(d));e&&(b=e.querySelector("a"))&&b.focus()}}}));if(this.v){var a=this.v.querySelector("#menu");a&&(this.h.listen(a,"click",b=>{b.preventDefault();b.stopPropagation();this.hasAttribute("drawer--open")?
this.removeAttribute("drawer--open"):this.setAttribute("drawer--open","")}),this.h.listen(document.body,"click",()=>{this.hasAttribute("drawer--open")&&this.removeAttribute("drawer--open")}))}this.h.listen(document.body,"keydown",b=>{37==b.keyCode?(document.activeElement&&document.activeElement.blur(),this.Fj()):39==b.keyCode&&(document.activeElement&&document.activeElement.blur(),this.Ej())});(a=this.querySelector("#codelab-feedback"))&&this.h.listen(a,"click",b=>{"userfeedback"in window&&(window.userfeedback.api.startFeedback({productId:"5143948"}),
b.preventDefault())})}La(){this.steps=Array.from(this.querySelectorAll("google-codelab-step"));const a=this.getAttribute("feedback-link");_ds.L(this,C4,{Ab:a,Vp:T4()});this.m=this.querySelector("#drawer");this.v=this.querySelector("#codelab-title");this.Hd=this.querySelector("#steps");this.N=this.querySelector("#controls");this.o=this.querySelector("#controls #previous-step");this.J=this.querySelector("#controls #next-step");this.X=this.querySelector("#controls #done");this.steps.forEach(b=>{this.Hd.appendChild(b)});
R4(this);S4(this);this.Z=this.querySelectorAll(".codelab-time-container");P4(this);L4(this);I4(this);N4(this);M4(this)}};U4.prototype.select=U4.prototype.select;U4.prototype.selectPrevious=U4.prototype.Fj;U4.prototype.selectNext=U4.prototype.Ej;U4.prototype.attributeChangedCallback=U4.prototype.attributeChangedCallback;U4.prototype.disconnectedCallback=U4.prototype.disconnectedCallback;U4.prototype.connectedCallback=U4.prototype.connectedCallback;var W4=async function(a){let b;var c=(null==(b=_ds.nj())?void 0:b.href)||"";c&&(a=await V4(a,c),c=_ds.M(x4,{Zo:c,Xo:a}),(a=document.querySelector(".devsite-article"))&&a.insertBefore(c,a.querySelector(".devsite-article-meta")))},X4=async function(a){var b=document.querySelector("devsite-language-selector");if(b){b=b.cloneNode(!0);var c=b.querySelector(".devsite-select");c&&c.remove();c=b.cloneNode(!0);var d=a.querySelector("devsite-user"),e=a.querySelector("#codelab-title");b&&(null==e||e.insertBefore(b,
d));a=a.querySelector("#controls .spacer");c&&(null==a||a.appendChild(c))}},Y4=function(a){if(a.D){a.eh.observe(a.D,{childList:!0,subtree:!0,attributes:!0,attributeFilter:["class"]});var b=a.querySelectorAll(".step-title");0<b.length&&a.Id.observe(b[b.length-1])}},Z4=function(a){const b=a.querySelector("#codelab-feedback");b&&a.eventHandler.listen(b,"click",c=>{c.preventDefault();let d;_ds.zC({productId:"5143948",locale:(null==(d=a.app)?void 0:d.getLocale())||"en"})})},$4=async function(a,b){await a.Nb.Ul(b)},
V4=async function(a,b){let c;a=await (null==(c=a.app)?void 0:c.fetchPageTitle(b))||"";a=a.replaceAll("&nbsp;"," ");return a.split("|")[0].trim()},a5=class extends U4{constructor(a=null){super();this.H=!1;this.eh=new MutationObserver(d=>{if(this.isConnected)for(const g of d)if(d=g.target,d.classList.contains("devsite-nav-active")){let h;const k=null==(h=this.D)?void 0:h.querySelector("devsite-toc > .devsite-nav-list > .devsite-nav-heading .devsite-nav-text");let l;const m=Array.from((null==(l=this.D)?
void 0:l.querySelectorAll("devsite-toc > .devsite-nav-list > .devsite-nav-item:not(.devsite-nav-heading)"))||[]);for(const [n,t]of m.entries()){var e=n,f=t;f.removeAttribute("completed");if(f.querySelector(".devsite-nav-active")){f=0;for(let v=0;v<e;v++)f+=this.V[v],m[v].setAttribute("completed","");e=this.qa-f;k&&(e=(new _ds.dG("{MINUTES_REMAINING, plural, =1 {1 minute remaining}other {# minutes remaining}}")).format({MINUTES_REMAINING:e}),k.textContent=e)}}d.parentElement&&(d=m.indexOf(d.parentElement),
0<d&&this.select(d))}});this.Id=new IntersectionObserver(d=>{if(this.isConnected){var e,f=null==(e=this.D)?void 0:e.querySelector(`[href="#${d[0].target.id}"]`);if(d[0].isIntersecting){let g,h;null==(h=null==(g=this.D)?void 0:g.querySelector(".devsite-nav-active"))||h.classList.remove("devsite-nav-active");null==f||f.classList.add("devsite-nav-active")}else null==f||f.classList.remove("devsite-nav-active")}});this.V=[];this.qa=0;this.Qb=!0;this.K=this.F="";this.app=this.D=null;this.cb=new _ds.Kk;
this.Nb=a||new w4;this.Hb=null;a=_ds.F().searchParams;const b=a.get("pc")||"",c=a.get("tc")||"";this.W={result:b,total:c,we:a.get("vc")};this.Xm=0<b.length&&0<c.length}async connectedCallback(){this.qa=0;this.V=[];this.app=await _ds.x();this.K=(this.H=this.app.hasMendelFlagAccess("MiscFeatureFlags","enable_codelabs_as_a_content_type"))?this.getAttribute("layout")||"paginated":"paginated";document.body.setAttribute("codelabs-content-type",this.K);this.F=this.getAttribute("id")||"";this.steps=Array.from(this.querySelectorAll("google-codelab-step"));
var a;this.Qb="award-behavior-disable-all"!==(null==(a=document.querySelector('meta[name="award_behavior"]'))?void 0:a.getAttribute("value"));this.D=document.querySelector("devsite-toc:not([devsite-toc-embedded])");super.connectedCallback();(a=_ds.nj())&&this.dispatchEvent(new CustomEvent("devsite-analytics-pageview",{detail:{virtualPath:`${_ds.xj(document.location.pathname)}?continue=${a.href}`},bubbles:!0}));this.cb.g()}disconnectedCallback(){super.disconnectedCallback();document.body.removeAttribute("codelabs-content-type");
let a;null==(a=this.querySelector("style"))||a.remove();this.eh.disconnect();this.Id.disconnect();this.cb=new _ds.Kk}async attributeChangedCallback(a,b,c,d){await this.cb.promise;if(this.isConnected)if(this.H&&"paginated"!==this.K)switch(a){case "selected":a=Number(c),a!==this.g&&(this.g=a,G4(this),J4(this))}else super.attributeChangedCallback(a,b,c,d)}async La(){if(this.H&&"paginated"!==this.K){var a=this.querySelectorAll("google-codelab-step");for(var b of a)a=b.getAttribute("duration")||"0",this.V.push(Number(a));
for(b=0;b<this.V.length;b++)this.qa+=this.V[b];b=document.createElement("style");b.textContent="html{scroll-behavior:smooth}";this.appendChild(b);await W4(this);b=Number(this.getAttribute("selected"))||0;if(0<b){var c;await (null==(c=this.app)?void 0:c.scrollToAnchor(`#${b}`))}}else super.La(),c=this.querySelector("#codelab-title"),b=document.createElement("devsite-user"),null==c||c.appendChild(b),c=this.querySelector("#arrow-back"),b=this.querySelector("#done"),(a=_ds.nj())?(this.Hb=a.toString(),
c&&_ds.ad(c,_ds.$c(this.Hb)),b&&_ds.ad(b,_ds.$c(this.Hb))):(null==c||c.classList.add("no-return-url"),null==b||b.classList.add("no-return-url")),await X4(this);this.Df();if(this.Xm){c=this.W.result;b=this.W.total;a=this.W.we;var d;const e=(null==(d=_ds.nj())?void 0:d.href)||"";c&&b&&a&&(d=_ds.M(y4,{result:c,total:b,we:a,kb:e}),document.body.appendChild(d))}this.Qb&&await this.Cf()}async Ha(){this.H&&"paginated"!==this.K?Y4(this):super.Ha();Z4(this);this.eventHandler.listen(this,"google-codelab-pageview",
()=>{this.Df();this.Qb&&this.Cf()});this.eventHandler.listen(document,"devsite-project-result-shown",()=>{let a;const b=null==(a=this.W)?void 0:a.we;b&&$4(this,b)})}async Cf(){if(this.g===this.steps.length-1&&this.F){await this.Nb.Cf(this.F);let a;null==(a=window.opener)||a.postMessage({url:_ds.F().href,action:"codelab-completed"},"*");this.setAttribute("google-codelab-completed","");H4(this,"google-codelab-completed",{"codelab-id":this.F})}}Df(){1<=this.g&&this.g!==this.steps.length-1&&this.F&&this.Nb.Df(this.F)}};var c5=async function(){if(b5()){var a=null;if(await (await _ds.x()).isSignedIn()){const d=new _ds.Xv;try{a=await d.oa()}catch(e){}}var b,c;a=null!=(c=null==(b=a)?void 0:b.profileId)?c:void 0;b=new _ds.Ev;try{await b.zb({url:"https://developers.google.com/profile/badges/codelabs/first-codelab",profileId:a})}catch(d){console.error(`There was an error awarding the first codelab badge.
Error: ${d}`)}}},d5=async function(a){if(b5()){var b=a.getAttribute("badge-path");if(b)if(a=new URL(b,"https://developers.google.com"),a.pathname.startsWith("/profile/badges/codelabs/")){b=null;if(await (await _ds.x()).isSignedIn()){const e=new _ds.Xv;try{b=await e.oa()}catch(f){}}var c,d;b=null!=(d=null==(c=b)?void 0:c.profileId)?d:void 0;c=new _ds.Ev;try{await c.zb({url:a.href,profileId:b})}catch(e){}}else console.error(`The path of the codelab's badge is incorrect. ${b} must start with "${"/profile/badges/codelabs/"}" and point to a directory containing a "_badge.yaml" file`)}},
b5=function(){const a=document.querySelector("devsite-user#devsite-user");return null!=a&&a.hasAttribute("enable-profiles")},e5=class extends a5{constructor(){super(new u4);this.eventHandler.listen(this,"google-codelab-completed",()=>{c5();d5(this)})}};try{window.customElements.define("google-codelab",e5)}catch(a){console.warn("Unrecognized DevSite custom element - GoogleDevCodelab",a)};})(_ds_www);