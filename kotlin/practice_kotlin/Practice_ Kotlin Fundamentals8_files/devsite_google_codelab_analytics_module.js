(function(_ds){var window=this;/*

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
var h4=["google-codelab"],i4=function(){const a=document.createElement("script");a.src="https://www.google-analytics.com/analytics.js";a.async=!1;return new Promise((b,c)=>{a.onload=()=>b(a);a.onerror=()=>{a.parentNode&&a.parentNode.removeChild(a);c()};document.head&&document.head.appendChild(a)})},j4=async function(){window.GoogleAnalyticsObject="ga";window.ga=window.ga||function(){(window.ga.q=window.ga.q||[]).push(arguments)};window.ga.l=(new Date).valueOf();try{return await i4()}catch(a){}},m4=
function(a){if(window.ga){a.g&&!k4(a.g)&&window.ga("create",a.g,"auto");a:{var b=location.search.substring(1).split("&");for(let c=0;c<b.length;c++){let d=b[c].split("=");if("viewga"===d[0]){b=d[1];break a}}b=""}b&&!k4(b)&&(window.ga("create",b,"auto","view"),window.ga("view.send","pageview"))}l4(a)},o4=function(a){a.h.listen(document.body,"google-codelab-action",b=>{b=b.Y.detail;n4({hitType:"event",dimension1:a.v,dimension2:a.o||"",dimension4:a.C||void 0,eventCategory:b.category,eventAction:b.action||
"",eventLabel:b.label||""})});a.h.listen(document.body,"google-codelab-pageview",b=>{b=b.Y.detail;n4({hitType:"pageview",dimension1:a.v,dimension2:a.o,dimension4:a.C||void 0,page:b.page||"",title:b.title||""})})},p4=function(){h4.forEach(a=>{document.querySelectorAll(a).forEach(b=>{b.setAttribute("anayltics-ready","anayltics-ready")})})},l4=function(a){window.ga&&(a=a.getAttribute("codelab-gaid"))&&!k4(a)&&window.ga("create",a,"auto","codelabAccount")},n4=function(a){window.ga(function(){window.ga.getAll&&
window.ga.getAll().forEach(b=>{b.send(a)})})},k4=function(a){let b=!1;window.ga&&window.ga.getAll&&window.ga.getAll().forEach(c=>{c.get("trackingId")==a&&(b=!0)});return b},q4=class extends HTMLElement{constructor(){super();this.m=!1;this.h=new _ds.G;this.o=this.getAttribute("category")||"";this.v=this.getAttribute("environment")||""}connectedCallback(){this.g=this.getAttribute("gaid")||"";!this.m&&this.g&&("ga"in window?(m4(this),o4(this),p4(),this.m=!0):j4().then(a=>{a&&(m4(this),o4(this),p4(),
this.m=!0)}))}static get observedAttributes(){return["codelab-gaid","environment","category","codelab-id"]}attributeChangedCallback(a,b,c){switch(a){case "gaid":this.g=c;break;case "codelab-gaid":c&&this.m&&l4(this);break;case "environment":this.v=c;break;case "category":this.o=c;break;case "codelab-id":this.C=c}}disconnectedCallback(){_ds.I(this.h)}};q4.injectGAScript=i4;q4.prototype.disconnectedCallback=q4.prototype.disconnectedCallback;q4.prototype.attributeChangedCallback=q4.prototype.attributeChangedCallback;
q4.prototype.connectedCallback=q4.prototype.connectedCallback;var r4=class extends q4{};try{window.customElements.define("google-codelab-analytics",r4)}catch(a){console.warn("Unrecognized DevSite custom element - DevsiteCodelabAnalytics",a)};})(_ds_www);
