(function(_ds){var window=this;var f5=function(a){var b=a.step,c=a.label;a='<h2 is-upgraded class="step-title"><a href="#'+_ds.U(b)+'">';b=_ds.R(b+1)+". "+_ds.R(c);return(0,_ds.Q)(a+b+"</a></h2>")};/*

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
var g5=function(a){if(!a.J){a.setAttribute("tabindex","-1");var b=a.getElementsByTagName("google-codelab-about");0<b.length&&(a.m=b[0],a.m.parentNode.removeChild(a.m));a.o=_ds.Uh(document,"div");a.o.classList.add("instructions");a.g=_ds.Uh(document,"div");a.g.classList.add("inner");_ds.ai(a.g,a);a.o.appendChild(a.g);_ds.Wh(a);(b=a.g.querySelector(".step-title"))||(b=_ds.M(f5,{step:a.F,label:a.v}));a.h=b;_ds.Yh(a.g,b,0);a.g.querySelectorAll("pre code").forEach(c=>{if(window.prettyPrintOne instanceof
Function){const d=window.prettyPrintOne(c.innerHTML),e=new _ds.TE(_ds.XE(new _ds.QE));_ds.lh(c,e.g(d))}else c.classList.add("prettyprint");a.H.listen(c,"copy",()=>{const d=new CustomEvent("google-codelab-action",{detail:{category:"snippet",action:"copy",label:c.textContent.substring(0,500)}});document.body.dispatchEvent(d)})});a.m&&a.appendChild(a.m);a.appendChild(a.o);a.J=!0}},h5=class extends HTMLElement{constructor(){super();this.g=this.o=null;this.J=!1;this.F=0;this.v="";this.m=this.h=null;this.H=
new _ds.G}connectedCallback(){g5(this)}disconnectedCallback(){}static get observedAttributes(){return["label","step"]}attributeChangedCallback(a){if("label"===a||"step"===a)this.hasAttribute("label")&&(this.v=this.getAttribute("label")),this.hasAttribute("step")&&(this.F=parseInt(this.getAttribute("step")||"",10)),this.h&&(a=_ds.M(f5,{step:this.F,label:this.v}),_ds.$h(a,this.h),this.h=a)}};h5.prototype.attributeChangedCallback=h5.prototype.attributeChangedCallback;
h5.prototype.disconnectedCallback=h5.prototype.disconnectedCallback;h5.prototype.connectedCallback=h5.prototype.connectedCallback;var i5=class extends h5{constructor(){super(...arguments);this.D=!1;this.G="";this.C=new _ds.Kk}async connectedCallback(){this.D=(await _ds.x()).hasMendelFlagAccess("MiscFeatureFlags","enable_codelabs_as_a_content_type");var a;this.G=(null==(a=document.querySelector("google-codelab"))?void 0:a.getAttribute("layout"))||"paginated";if(this.D&&"paginated"!==this.G){a=this.querySelectorAll("h2:not(.step-title)");for(var b of a)b.classList.add("hide-from-toc");b=document.querySelectorAll("devsite-toc");
for(const c of b)c.Ig("true")}else super.connectedCallback();this.C.g()}disconnectedCallback(){super.disconnectedCallback();this.C=new _ds.Kk}async attributeChangedCallback(a,b,c,d){await this.C.promise;this.D&&"paginated"!==this.G||super.attributeChangedCallback(a,b,c,d)}};try{window.customElements.define("google-codelab-step",i5)}catch(a){console.warn("Unrecognized DevSite custom element - DevsiteCodelabStep",a)};})(_ds_www);
