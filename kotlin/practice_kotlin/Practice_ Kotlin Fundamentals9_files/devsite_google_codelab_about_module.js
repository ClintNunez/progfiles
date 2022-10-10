(function(_ds){var window=this;var c4=function(a){var b=a.duration,c=a.Yi;a=a.Jh;b='<div class="caption">About this codelab</div><div class="about">'+(b?'<div class="about-item duration"><i class="material-icons">schedule</i>'+_ds.R(b)+"</div>":"");c&&(b+='<div class="about-item last-updated"><i class="material-icons">article</i>',c="Last updated "+_ds.R(c),b+=c,b+="</div>");b+='<div class="about-item authors"><i class="material-icons">account_circle</i>';a?(c="Written by "+_ds.R(a),b+=c):b+="Written by a Googler";return(0,_ds.Q)(b+
"</div></div>")};var d4=function(a){a=a||{};var b=a.kp,c=a.Yi,d=a.Jh;a="";if(b){a+='<div class="codelab-title">';const e=b.length;for(let f=0;f<e;f++)a+='<div class="token">'+_ds.R(b[f])+"</div>";a+="</div>"}a+='<div class="about-card"><h2 class="title">About this codelab</h2>';c&&(a+='<div class="last-updated"><i class="material-icons">subject</i>',b="Last updated "+_ds.R(c),a+=b,a+="</div>");a+='<div class="authors"><i class="material-icons">account_circle</i>';d?(b="Written by "+_ds.R(d),a+=b):a+="Written by a Googler";
return(0,_ds.Q)(a+"</div></div>")};/*

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
var e4=function(a){a.hasAttribute("last-updated")&&(a.D=a.getAttribute("last-updated"));a.hasAttribute("authors")&&(a.v=a.getAttribute("authors"));a.hasAttribute("codelab-title")&&(a.C=a.getAttribute("codelab-title"));var b;(b=a.D)?(b=new Date(b),b=(new _ds.mI("MMM d, yyyy")).format(b)):b=null;_ds.L(a,d4,{Yi:b,Jh:a.v,kp:a.C.split(":").join(":||").split("||")});a.o=!0},f4=class extends HTMLElement{constructor(){super();this.C=this.v="";this.o=!1;this.D=""}connectedCallback(){this.o||e4(this)}disconnectedCallback(){}static get observedAttributes(){return["authors",
"last-updated","codelab-title"]}attributeChangedCallback(){e4(this)}};f4.prototype.attributeChangedCallback=f4.prototype.attributeChangedCallback;f4.prototype.disconnectedCallback=f4.prototype.disconnectedCallback;f4.prototype.connectedCallback=f4.prototype.connectedCallback;var g4=class extends f4{constructor(){super(...arguments);this.m=!1;this.locale=this.h="";this.g=new _ds.Kk}async connectedCallback(){var a=await _ds.x();this.locale=a.getLocale()||"en";this.m=a.hasMendelFlagAccess("MiscFeatureFlags","enable_codelabs_as_a_content_type");var b;this.h=(null==(b=document.querySelector("google-codelab"))?void 0:b.getAttribute("layout"))||"paginated";if(this.m&&"paginated"!==this.h){a=(new _ds.dG("{MINUTES, plural, =1 {1 minute}other {# minutes}}")).format({MINUTES:this.getAttribute("duration")||
"0"});(b=this.getAttribute("last-updated")||"")&&(b=(new Intl.DateTimeFormat(this.locale,{month:"long",day:"numeric",year:"numeric"})).format(new Date(b)));const c=this.getAttribute("authors")||"";_ds.L(this,c4,{duration:a,Yi:b,Jh:c})}else super.connectedCallback();this.g.g()}disconnectedCallback(){super.disconnectedCallback();this.g=new _ds.Kk}async attributeChangedCallback(a,b,c,d){await this.g.promise;this.m&&"paginated"!==this.h||super.attributeChangedCallback(a,b,c,d)}};try{window.customElements.define("google-codelab-about",g4)}catch(a){console.warn("Unrecognized DevSite custom element - DevsiteCodelabAbout",a)};})(_ds_www);
