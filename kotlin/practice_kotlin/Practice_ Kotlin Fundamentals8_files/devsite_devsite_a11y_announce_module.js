(function(_ds){var window=this;var wL=function(){return"devsite-a11y-announce"},xL=async function(a,b){_ds.ni(a)===b&&(_ds.gi(a,""),await _ds.rj(),await _ds.rj());_ds.gi(a,b)},yL=class extends _ds.E{constructor(){super();this.eventHandler=new _ds.G}connectedCallback(){this.setAttribute("aria-live","assertive");this.setAttribute("aria-atomic","true");this.eventHandler.listen(document.body,"devsite-a11y-announce",a=>{a=a.Y;(a=a.detail&&a.detail.message)&&xL(this,a)})}disconnectedCallback(){_ds.I(this.eventHandler)}};
yL.prototype.connectedCallback=yL.prototype.connectedCallback;yL.getTagName=wL;try{window.customElements.define(wL(),yL)}catch(a){console.warn("Unrecognized DevSite custom element - DevsiteA11yAnnounce",a)};})(_ds_www);
